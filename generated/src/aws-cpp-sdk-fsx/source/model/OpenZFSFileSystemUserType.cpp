/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSFileSystemUserType.h>
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
      namespace OpenZFSFileSystemUserTypeMapper
      {

        static const int POSIX_HASH = HashingUtils::HashString("POSIX");


        OpenZFSFileSystemUserType GetOpenZFSFileSystemUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POSIX_HASH)
          {
            return OpenZFSFileSystemUserType::POSIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenZFSFileSystemUserType>(hashCode);
          }

          return OpenZFSFileSystemUserType::NOT_SET;
        }

        Aws::String GetNameForOpenZFSFileSystemUserType(OpenZFSFileSystemUserType enumValue)
        {
          switch(enumValue)
          {
          case OpenZFSFileSystemUserType::NOT_SET:
            return {};
          case OpenZFSFileSystemUserType::POSIX:
            return "POSIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenZFSFileSystemUserTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
