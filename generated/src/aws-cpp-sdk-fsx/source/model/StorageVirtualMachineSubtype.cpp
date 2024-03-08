/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/StorageVirtualMachineSubtype.h>
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
      namespace StorageVirtualMachineSubtypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int DP_DESTINATION_HASH = HashingUtils::HashString("DP_DESTINATION");
        static const int SYNC_DESTINATION_HASH = HashingUtils::HashString("SYNC_DESTINATION");
        static const int SYNC_SOURCE_HASH = HashingUtils::HashString("SYNC_SOURCE");


        StorageVirtualMachineSubtype GetStorageVirtualMachineSubtypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return StorageVirtualMachineSubtype::DEFAULT;
          }
          else if (hashCode == DP_DESTINATION_HASH)
          {
            return StorageVirtualMachineSubtype::DP_DESTINATION;
          }
          else if (hashCode == SYNC_DESTINATION_HASH)
          {
            return StorageVirtualMachineSubtype::SYNC_DESTINATION;
          }
          else if (hashCode == SYNC_SOURCE_HASH)
          {
            return StorageVirtualMachineSubtype::SYNC_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageVirtualMachineSubtype>(hashCode);
          }

          return StorageVirtualMachineSubtype::NOT_SET;
        }

        Aws::String GetNameForStorageVirtualMachineSubtype(StorageVirtualMachineSubtype enumValue)
        {
          switch(enumValue)
          {
          case StorageVirtualMachineSubtype::NOT_SET:
            return {};
          case StorageVirtualMachineSubtype::DEFAULT:
            return "DEFAULT";
          case StorageVirtualMachineSubtype::DP_DESTINATION:
            return "DP_DESTINATION";
          case StorageVirtualMachineSubtype::SYNC_DESTINATION:
            return "SYNC_DESTINATION";
          case StorageVirtualMachineSubtype::SYNC_SOURCE:
            return "SYNC_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageVirtualMachineSubtypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
