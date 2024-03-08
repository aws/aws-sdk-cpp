/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/RestoreOpenZFSVolumeOption.h>
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
      namespace RestoreOpenZFSVolumeOptionMapper
      {

        static const int DELETE_INTERMEDIATE_SNAPSHOTS_HASH = HashingUtils::HashString("DELETE_INTERMEDIATE_SNAPSHOTS");
        static const int DELETE_CLONED_VOLUMES_HASH = HashingUtils::HashString("DELETE_CLONED_VOLUMES");


        RestoreOpenZFSVolumeOption GetRestoreOpenZFSVolumeOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE_INTERMEDIATE_SNAPSHOTS_HASH)
          {
            return RestoreOpenZFSVolumeOption::DELETE_INTERMEDIATE_SNAPSHOTS;
          }
          else if (hashCode == DELETE_CLONED_VOLUMES_HASH)
          {
            return RestoreOpenZFSVolumeOption::DELETE_CLONED_VOLUMES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreOpenZFSVolumeOption>(hashCode);
          }

          return RestoreOpenZFSVolumeOption::NOT_SET;
        }

        Aws::String GetNameForRestoreOpenZFSVolumeOption(RestoreOpenZFSVolumeOption enumValue)
        {
          switch(enumValue)
          {
          case RestoreOpenZFSVolumeOption::NOT_SET:
            return {};
          case RestoreOpenZFSVolumeOption::DELETE_INTERMEDIATE_SNAPSHOTS:
            return "DELETE_INTERMEDIATE_SNAPSHOTS";
          case RestoreOpenZFSVolumeOption::DELETE_CLONED_VOLUMES:
            return "DELETE_CLONED_VOLUMES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreOpenZFSVolumeOptionMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
