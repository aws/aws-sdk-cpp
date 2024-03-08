/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/VolumeFilterName.h>
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
      namespace VolumeFilterNameMapper
      {

        static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
        static const int storage_virtual_machine_id_HASH = HashingUtils::HashString("storage-virtual-machine-id");


        VolumeFilterName GetVolumeFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return VolumeFilterName::file_system_id;
          }
          else if (hashCode == storage_virtual_machine_id_HASH)
          {
            return VolumeFilterName::storage_virtual_machine_id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeFilterName>(hashCode);
          }

          return VolumeFilterName::NOT_SET;
        }

        Aws::String GetNameForVolumeFilterName(VolumeFilterName enumValue)
        {
          switch(enumValue)
          {
          case VolumeFilterName::NOT_SET:
            return {};
          case VolumeFilterName::file_system_id:
            return "file-system-id";
          case VolumeFilterName::storage_virtual_machine_id:
            return "storage-virtual-machine-id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeFilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
