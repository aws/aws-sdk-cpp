/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteOpenZFSVolumeOption.h>
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
      namespace DeleteOpenZFSVolumeOptionMapper
      {

        static const int DELETE_CHILD_VOLUMES_AND_SNAPSHOTS_HASH = HashingUtils::HashString("DELETE_CHILD_VOLUMES_AND_SNAPSHOTS");


        DeleteOpenZFSVolumeOption GetDeleteOpenZFSVolumeOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE_CHILD_VOLUMES_AND_SNAPSHOTS_HASH)
          {
            return DeleteOpenZFSVolumeOption::DELETE_CHILD_VOLUMES_AND_SNAPSHOTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteOpenZFSVolumeOption>(hashCode);
          }

          return DeleteOpenZFSVolumeOption::NOT_SET;
        }

        Aws::String GetNameForDeleteOpenZFSVolumeOption(DeleteOpenZFSVolumeOption enumValue)
        {
          switch(enumValue)
          {
          case DeleteOpenZFSVolumeOption::NOT_SET:
            return {};
          case DeleteOpenZFSVolumeOption::DELETE_CHILD_VOLUMES_AND_SNAPSHOTS:
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

      } // namespace DeleteOpenZFSVolumeOptionMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
