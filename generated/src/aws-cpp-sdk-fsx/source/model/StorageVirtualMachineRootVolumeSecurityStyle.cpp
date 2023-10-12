/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/StorageVirtualMachineRootVolumeSecurityStyle.h>
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
      namespace StorageVirtualMachineRootVolumeSecurityStyleMapper
      {

        static constexpr uint32_t UNIX_HASH = ConstExprHashingUtils::HashString("UNIX");
        static constexpr uint32_t NTFS_HASH = ConstExprHashingUtils::HashString("NTFS");
        static constexpr uint32_t MIXED_HASH = ConstExprHashingUtils::HashString("MIXED");


        StorageVirtualMachineRootVolumeSecurityStyle GetStorageVirtualMachineRootVolumeSecurityStyleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNIX_HASH)
          {
            return StorageVirtualMachineRootVolumeSecurityStyle::UNIX;
          }
          else if (hashCode == NTFS_HASH)
          {
            return StorageVirtualMachineRootVolumeSecurityStyle::NTFS;
          }
          else if (hashCode == MIXED_HASH)
          {
            return StorageVirtualMachineRootVolumeSecurityStyle::MIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageVirtualMachineRootVolumeSecurityStyle>(hashCode);
          }

          return StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET;
        }

        Aws::String GetNameForStorageVirtualMachineRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle enumValue)
        {
          switch(enumValue)
          {
          case StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET:
            return {};
          case StorageVirtualMachineRootVolumeSecurityStyle::UNIX:
            return "UNIX";
          case StorageVirtualMachineRootVolumeSecurityStyle::NTFS:
            return "NTFS";
          case StorageVirtualMachineRootVolumeSecurityStyle::MIXED:
            return "MIXED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageVirtualMachineRootVolumeSecurityStyleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
