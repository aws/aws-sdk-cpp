/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ScanStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ScanStatusReasonMapper
      {

        static constexpr uint32_t PENDING_INITIAL_SCAN_HASH = ConstExprHashingUtils::HashString("PENDING_INITIAL_SCAN");
        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t UNMANAGED_EC2_INSTANCE_HASH = ConstExprHashingUtils::HashString("UNMANAGED_EC2_INSTANCE");
        static constexpr uint32_t UNSUPPORTED_OS_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_OS");
        static constexpr uint32_t SCAN_ELIGIBILITY_EXPIRED_HASH = ConstExprHashingUtils::HashString("SCAN_ELIGIBILITY_EXPIRED");
        static constexpr uint32_t RESOURCE_TERMINATED_HASH = ConstExprHashingUtils::HashString("RESOURCE_TERMINATED");
        static constexpr uint32_t SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("SUCCESSFUL");
        static constexpr uint32_t NO_RESOURCES_FOUND_HASH = ConstExprHashingUtils::HashString("NO_RESOURCES_FOUND");
        static constexpr uint32_t IMAGE_SIZE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("IMAGE_SIZE_EXCEEDED");
        static constexpr uint32_t SCAN_FREQUENCY_MANUAL_HASH = ConstExprHashingUtils::HashString("SCAN_FREQUENCY_MANUAL");
        static constexpr uint32_t SCAN_FREQUENCY_SCAN_ON_PUSH_HASH = ConstExprHashingUtils::HashString("SCAN_FREQUENCY_SCAN_ON_PUSH");
        static constexpr uint32_t EC2_INSTANCE_STOPPED_HASH = ConstExprHashingUtils::HashString("EC2_INSTANCE_STOPPED");
        static constexpr uint32_t PENDING_DISABLE_HASH = ConstExprHashingUtils::HashString("PENDING_DISABLE");
        static constexpr uint32_t NO_INVENTORY_HASH = ConstExprHashingUtils::HashString("NO_INVENTORY");
        static constexpr uint32_t STALE_INVENTORY_HASH = ConstExprHashingUtils::HashString("STALE_INVENTORY");
        static constexpr uint32_t EXCLUDED_BY_TAG_HASH = ConstExprHashingUtils::HashString("EXCLUDED_BY_TAG");
        static constexpr uint32_t UNSUPPORTED_RUNTIME_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_RUNTIME");
        static constexpr uint32_t UNSUPPORTED_MEDIA_TYPE_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_MEDIA_TYPE");
        static constexpr uint32_t UNSUPPORTED_CONFIG_FILE_HASH = ConstExprHashingUtils::HashString("UNSUPPORTED_CONFIG_FILE");
        static constexpr uint32_t DEEP_INSPECTION_PACKAGE_COLLECTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DEEP_INSPECTION_PACKAGE_COLLECTION_LIMIT_EXCEEDED");
        static constexpr uint32_t DEEP_INSPECTION_DAILY_SSM_INVENTORY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DEEP_INSPECTION_DAILY_SSM_INVENTORY_LIMIT_EXCEEDED");
        static constexpr uint32_t DEEP_INSPECTION_COLLECTION_TIME_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DEEP_INSPECTION_COLLECTION_TIME_LIMIT_EXCEEDED");
        static constexpr uint32_t DEEP_INSPECTION_NO_INVENTORY_HASH = ConstExprHashingUtils::HashString("DEEP_INSPECTION_NO_INVENTORY");


        ScanStatusReason GetScanStatusReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_INITIAL_SCAN_HASH)
          {
            return ScanStatusReason::PENDING_INITIAL_SCAN;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return ScanStatusReason::ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ScanStatusReason::INTERNAL_ERROR;
          }
          else if (hashCode == UNMANAGED_EC2_INSTANCE_HASH)
          {
            return ScanStatusReason::UNMANAGED_EC2_INSTANCE;
          }
          else if (hashCode == UNSUPPORTED_OS_HASH)
          {
            return ScanStatusReason::UNSUPPORTED_OS;
          }
          else if (hashCode == SCAN_ELIGIBILITY_EXPIRED_HASH)
          {
            return ScanStatusReason::SCAN_ELIGIBILITY_EXPIRED;
          }
          else if (hashCode == RESOURCE_TERMINATED_HASH)
          {
            return ScanStatusReason::RESOURCE_TERMINATED;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return ScanStatusReason::SUCCESSFUL;
          }
          else if (hashCode == NO_RESOURCES_FOUND_HASH)
          {
            return ScanStatusReason::NO_RESOURCES_FOUND;
          }
          else if (hashCode == IMAGE_SIZE_EXCEEDED_HASH)
          {
            return ScanStatusReason::IMAGE_SIZE_EXCEEDED;
          }
          else if (hashCode == SCAN_FREQUENCY_MANUAL_HASH)
          {
            return ScanStatusReason::SCAN_FREQUENCY_MANUAL;
          }
          else if (hashCode == SCAN_FREQUENCY_SCAN_ON_PUSH_HASH)
          {
            return ScanStatusReason::SCAN_FREQUENCY_SCAN_ON_PUSH;
          }
          else if (hashCode == EC2_INSTANCE_STOPPED_HASH)
          {
            return ScanStatusReason::EC2_INSTANCE_STOPPED;
          }
          else if (hashCode == PENDING_DISABLE_HASH)
          {
            return ScanStatusReason::PENDING_DISABLE;
          }
          else if (hashCode == NO_INVENTORY_HASH)
          {
            return ScanStatusReason::NO_INVENTORY;
          }
          else if (hashCode == STALE_INVENTORY_HASH)
          {
            return ScanStatusReason::STALE_INVENTORY;
          }
          else if (hashCode == EXCLUDED_BY_TAG_HASH)
          {
            return ScanStatusReason::EXCLUDED_BY_TAG;
          }
          else if (hashCode == UNSUPPORTED_RUNTIME_HASH)
          {
            return ScanStatusReason::UNSUPPORTED_RUNTIME;
          }
          else if (hashCode == UNSUPPORTED_MEDIA_TYPE_HASH)
          {
            return ScanStatusReason::UNSUPPORTED_MEDIA_TYPE;
          }
          else if (hashCode == UNSUPPORTED_CONFIG_FILE_HASH)
          {
            return ScanStatusReason::UNSUPPORTED_CONFIG_FILE;
          }
          else if (hashCode == DEEP_INSPECTION_PACKAGE_COLLECTION_LIMIT_EXCEEDED_HASH)
          {
            return ScanStatusReason::DEEP_INSPECTION_PACKAGE_COLLECTION_LIMIT_EXCEEDED;
          }
          else if (hashCode == DEEP_INSPECTION_DAILY_SSM_INVENTORY_LIMIT_EXCEEDED_HASH)
          {
            return ScanStatusReason::DEEP_INSPECTION_DAILY_SSM_INVENTORY_LIMIT_EXCEEDED;
          }
          else if (hashCode == DEEP_INSPECTION_COLLECTION_TIME_LIMIT_EXCEEDED_HASH)
          {
            return ScanStatusReason::DEEP_INSPECTION_COLLECTION_TIME_LIMIT_EXCEEDED;
          }
          else if (hashCode == DEEP_INSPECTION_NO_INVENTORY_HASH)
          {
            return ScanStatusReason::DEEP_INSPECTION_NO_INVENTORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanStatusReason>(hashCode);
          }

          return ScanStatusReason::NOT_SET;
        }

        Aws::String GetNameForScanStatusReason(ScanStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ScanStatusReason::NOT_SET:
            return {};
          case ScanStatusReason::PENDING_INITIAL_SCAN:
            return "PENDING_INITIAL_SCAN";
          case ScanStatusReason::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ScanStatusReason::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ScanStatusReason::UNMANAGED_EC2_INSTANCE:
            return "UNMANAGED_EC2_INSTANCE";
          case ScanStatusReason::UNSUPPORTED_OS:
            return "UNSUPPORTED_OS";
          case ScanStatusReason::SCAN_ELIGIBILITY_EXPIRED:
            return "SCAN_ELIGIBILITY_EXPIRED";
          case ScanStatusReason::RESOURCE_TERMINATED:
            return "RESOURCE_TERMINATED";
          case ScanStatusReason::SUCCESSFUL:
            return "SUCCESSFUL";
          case ScanStatusReason::NO_RESOURCES_FOUND:
            return "NO_RESOURCES_FOUND";
          case ScanStatusReason::IMAGE_SIZE_EXCEEDED:
            return "IMAGE_SIZE_EXCEEDED";
          case ScanStatusReason::SCAN_FREQUENCY_MANUAL:
            return "SCAN_FREQUENCY_MANUAL";
          case ScanStatusReason::SCAN_FREQUENCY_SCAN_ON_PUSH:
            return "SCAN_FREQUENCY_SCAN_ON_PUSH";
          case ScanStatusReason::EC2_INSTANCE_STOPPED:
            return "EC2_INSTANCE_STOPPED";
          case ScanStatusReason::PENDING_DISABLE:
            return "PENDING_DISABLE";
          case ScanStatusReason::NO_INVENTORY:
            return "NO_INVENTORY";
          case ScanStatusReason::STALE_INVENTORY:
            return "STALE_INVENTORY";
          case ScanStatusReason::EXCLUDED_BY_TAG:
            return "EXCLUDED_BY_TAG";
          case ScanStatusReason::UNSUPPORTED_RUNTIME:
            return "UNSUPPORTED_RUNTIME";
          case ScanStatusReason::UNSUPPORTED_MEDIA_TYPE:
            return "UNSUPPORTED_MEDIA_TYPE";
          case ScanStatusReason::UNSUPPORTED_CONFIG_FILE:
            return "UNSUPPORTED_CONFIG_FILE";
          case ScanStatusReason::DEEP_INSPECTION_PACKAGE_COLLECTION_LIMIT_EXCEEDED:
            return "DEEP_INSPECTION_PACKAGE_COLLECTION_LIMIT_EXCEEDED";
          case ScanStatusReason::DEEP_INSPECTION_DAILY_SSM_INVENTORY_LIMIT_EXCEEDED:
            return "DEEP_INSPECTION_DAILY_SSM_INVENTORY_LIMIT_EXCEEDED";
          case ScanStatusReason::DEEP_INSPECTION_COLLECTION_TIME_LIMIT_EXCEEDED:
            return "DEEP_INSPECTION_COLLECTION_TIME_LIMIT_EXCEEDED";
          case ScanStatusReason::DEEP_INSPECTION_NO_INVENTORY:
            return "DEEP_INSPECTION_NO_INVENTORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanStatusReasonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
