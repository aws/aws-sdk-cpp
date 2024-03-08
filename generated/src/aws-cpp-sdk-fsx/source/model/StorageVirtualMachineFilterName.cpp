/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/StorageVirtualMachineFilterName.h>
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
      namespace StorageVirtualMachineFilterNameMapper
      {

        static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");


        StorageVirtualMachineFilterName GetStorageVirtualMachineFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return StorageVirtualMachineFilterName::file_system_id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageVirtualMachineFilterName>(hashCode);
          }

          return StorageVirtualMachineFilterName::NOT_SET;
        }

        Aws::String GetNameForStorageVirtualMachineFilterName(StorageVirtualMachineFilterName enumValue)
        {
          switch(enumValue)
          {
          case StorageVirtualMachineFilterName::NOT_SET:
            return {};
          case StorageVirtualMachineFilterName::file_system_id:
            return "file-system-id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageVirtualMachineFilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
