/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileSystemLifecycle.h>
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
      namespace FileSystemLifecycleMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t MISCONFIGURED_HASH = ConstExprHashingUtils::HashString("MISCONFIGURED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t MISCONFIGURED_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("MISCONFIGURED_UNAVAILABLE");


        FileSystemLifecycle GetFileSystemLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return FileSystemLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return FileSystemLifecycle::CREATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FileSystemLifecycle::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FileSystemLifecycle::DELETING;
          }
          else if (hashCode == MISCONFIGURED_HASH)
          {
            return FileSystemLifecycle::MISCONFIGURED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FileSystemLifecycle::UPDATING;
          }
          else if (hashCode == MISCONFIGURED_UNAVAILABLE_HASH)
          {
            return FileSystemLifecycle::MISCONFIGURED_UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSystemLifecycle>(hashCode);
          }

          return FileSystemLifecycle::NOT_SET;
        }

        Aws::String GetNameForFileSystemLifecycle(FileSystemLifecycle enumValue)
        {
          switch(enumValue)
          {
          case FileSystemLifecycle::NOT_SET:
            return {};
          case FileSystemLifecycle::AVAILABLE:
            return "AVAILABLE";
          case FileSystemLifecycle::CREATING:
            return "CREATING";
          case FileSystemLifecycle::FAILED:
            return "FAILED";
          case FileSystemLifecycle::DELETING:
            return "DELETING";
          case FileSystemLifecycle::MISCONFIGURED:
            return "MISCONFIGURED";
          case FileSystemLifecycle::UPDATING:
            return "UPDATING";
          case FileSystemLifecycle::MISCONFIGURED_UNAVAILABLE:
            return "MISCONFIGURED_UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSystemLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
