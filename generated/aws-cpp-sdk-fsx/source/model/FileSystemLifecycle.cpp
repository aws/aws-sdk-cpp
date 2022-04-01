﻿/**
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

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int MISCONFIGURED_HASH = HashingUtils::HashString("MISCONFIGURED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        FileSystemLifecycle GetFileSystemLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
