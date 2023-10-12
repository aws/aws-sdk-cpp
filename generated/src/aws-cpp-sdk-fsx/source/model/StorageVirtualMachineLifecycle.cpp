/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/StorageVirtualMachineLifecycle.h>
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
      namespace StorageVirtualMachineLifecycleMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t MISCONFIGURED_HASH = ConstExprHashingUtils::HashString("MISCONFIGURED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");


        StorageVirtualMachineLifecycle GetStorageVirtualMachineLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return StorageVirtualMachineLifecycle::CREATED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return StorageVirtualMachineLifecycle::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return StorageVirtualMachineLifecycle::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StorageVirtualMachineLifecycle::FAILED;
          }
          else if (hashCode == MISCONFIGURED_HASH)
          {
            return StorageVirtualMachineLifecycle::MISCONFIGURED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return StorageVirtualMachineLifecycle::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageVirtualMachineLifecycle>(hashCode);
          }

          return StorageVirtualMachineLifecycle::NOT_SET;
        }

        Aws::String GetNameForStorageVirtualMachineLifecycle(StorageVirtualMachineLifecycle enumValue)
        {
          switch(enumValue)
          {
          case StorageVirtualMachineLifecycle::NOT_SET:
            return {};
          case StorageVirtualMachineLifecycle::CREATED:
            return "CREATED";
          case StorageVirtualMachineLifecycle::CREATING:
            return "CREATING";
          case StorageVirtualMachineLifecycle::DELETING:
            return "DELETING";
          case StorageVirtualMachineLifecycle::FAILED:
            return "FAILED";
          case StorageVirtualMachineLifecycle::MISCONFIGURED:
            return "MISCONFIGURED";
          case StorageVirtualMachineLifecycle::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageVirtualMachineLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
