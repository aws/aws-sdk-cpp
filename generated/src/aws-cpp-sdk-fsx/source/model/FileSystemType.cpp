/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileSystemType.h>
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
      namespace FileSystemTypeMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LUSTRE_HASH = HashingUtils::HashString("LUSTRE");
        static const int ONTAP_HASH = HashingUtils::HashString("ONTAP");
        static const int OPENZFS_HASH = HashingUtils::HashString("OPENZFS");


        FileSystemType GetFileSystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return FileSystemType::WINDOWS;
          }
          else if (hashCode == LUSTRE_HASH)
          {
            return FileSystemType::LUSTRE;
          }
          else if (hashCode == ONTAP_HASH)
          {
            return FileSystemType::ONTAP;
          }
          else if (hashCode == OPENZFS_HASH)
          {
            return FileSystemType::OPENZFS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSystemType>(hashCode);
          }

          return FileSystemType::NOT_SET;
        }

        Aws::String GetNameForFileSystemType(FileSystemType enumValue)
        {
          switch(enumValue)
          {
          case FileSystemType::NOT_SET:
            return {};
          case FileSystemType::WINDOWS:
            return "WINDOWS";
          case FileSystemType::LUSTRE:
            return "LUSTRE";
          case FileSystemType::ONTAP:
            return "ONTAP";
          case FileSystemType::OPENZFS:
            return "OPENZFS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSystemTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
