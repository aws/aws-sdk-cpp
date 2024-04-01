/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/FileSystemLocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace FileSystemLocationTypeMapper
      {

        static const int SHARED_HASH = HashingUtils::HashString("SHARED");
        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");


        FileSystemLocationType GetFileSystemLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_HASH)
          {
            return FileSystemLocationType::SHARED;
          }
          else if (hashCode == LOCAL_HASH)
          {
            return FileSystemLocationType::LOCAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSystemLocationType>(hashCode);
          }

          return FileSystemLocationType::NOT_SET;
        }

        Aws::String GetNameForFileSystemLocationType(FileSystemLocationType enumValue)
        {
          switch(enumValue)
          {
          case FileSystemLocationType::NOT_SET:
            return {};
          case FileSystemLocationType::SHARED:
            return "SHARED";
          case FileSystemLocationType::LOCAL:
            return "LOCAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSystemLocationTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
