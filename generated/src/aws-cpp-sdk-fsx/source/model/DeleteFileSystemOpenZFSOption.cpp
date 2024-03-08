/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteFileSystemOpenZFSOption.h>
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
      namespace DeleteFileSystemOpenZFSOptionMapper
      {

        static const int DELETE_CHILD_VOLUMES_AND_SNAPSHOTS_HASH = HashingUtils::HashString("DELETE_CHILD_VOLUMES_AND_SNAPSHOTS");


        DeleteFileSystemOpenZFSOption GetDeleteFileSystemOpenZFSOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE_CHILD_VOLUMES_AND_SNAPSHOTS_HASH)
          {
            return DeleteFileSystemOpenZFSOption::DELETE_CHILD_VOLUMES_AND_SNAPSHOTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteFileSystemOpenZFSOption>(hashCode);
          }

          return DeleteFileSystemOpenZFSOption::NOT_SET;
        }

        Aws::String GetNameForDeleteFileSystemOpenZFSOption(DeleteFileSystemOpenZFSOption enumValue)
        {
          switch(enumValue)
          {
          case DeleteFileSystemOpenZFSOption::NOT_SET:
            return {};
          case DeleteFileSystemOpenZFSOption::DELETE_CHILD_VOLUMES_AND_SNAPSHOTS:
            return "DELETE_CHILD_VOLUMES_AND_SNAPSHOTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteFileSystemOpenZFSOptionMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
