/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateOpenZFSVolumeOption.h>
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
      namespace UpdateOpenZFSVolumeOptionMapper
      {

        static const int DELETE_INTERMEDIATE_SNAPSHOTS_HASH = HashingUtils::HashString("DELETE_INTERMEDIATE_SNAPSHOTS");
        static const int DELETE_CLONED_VOLUMES_HASH = HashingUtils::HashString("DELETE_CLONED_VOLUMES");
        static const int DELETE_INTERMEDIATE_DATA_HASH = HashingUtils::HashString("DELETE_INTERMEDIATE_DATA");


        UpdateOpenZFSVolumeOption GetUpdateOpenZFSVolumeOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE_INTERMEDIATE_SNAPSHOTS_HASH)
          {
            return UpdateOpenZFSVolumeOption::DELETE_INTERMEDIATE_SNAPSHOTS;
          }
          else if (hashCode == DELETE_CLONED_VOLUMES_HASH)
          {
            return UpdateOpenZFSVolumeOption::DELETE_CLONED_VOLUMES;
          }
          else if (hashCode == DELETE_INTERMEDIATE_DATA_HASH)
          {
            return UpdateOpenZFSVolumeOption::DELETE_INTERMEDIATE_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateOpenZFSVolumeOption>(hashCode);
          }

          return UpdateOpenZFSVolumeOption::NOT_SET;
        }

        Aws::String GetNameForUpdateOpenZFSVolumeOption(UpdateOpenZFSVolumeOption enumValue)
        {
          switch(enumValue)
          {
          case UpdateOpenZFSVolumeOption::NOT_SET:
            return {};
          case UpdateOpenZFSVolumeOption::DELETE_INTERMEDIATE_SNAPSHOTS:
            return "DELETE_INTERMEDIATE_SNAPSHOTS";
          case UpdateOpenZFSVolumeOption::DELETE_CLONED_VOLUMES:
            return "DELETE_CLONED_VOLUMES";
          case UpdateOpenZFSVolumeOption::DELETE_INTERMEDIATE_DATA:
            return "DELETE_INTERMEDIATE_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateOpenZFSVolumeOptionMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
