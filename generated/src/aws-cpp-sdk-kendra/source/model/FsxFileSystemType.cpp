/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FsxFileSystemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace FsxFileSystemTypeMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");


        FsxFileSystemType GetFsxFileSystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return FsxFileSystemType::WINDOWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FsxFileSystemType>(hashCode);
          }

          return FsxFileSystemType::NOT_SET;
        }

        Aws::String GetNameForFsxFileSystemType(FsxFileSystemType enumValue)
        {
          switch(enumValue)
          {
          case FsxFileSystemType::NOT_SET:
            return {};
          case FsxFileSystemType::WINDOWS:
            return "WINDOWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FsxFileSystemTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
