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

        static const int PENDING_INITIAL_SCAN_HASH = HashingUtils::HashString("PENDING_INITIAL_SCAN");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int UNMANAGED_EC2_INSTANCE_HASH = HashingUtils::HashString("UNMANAGED_EC2_INSTANCE");
        static const int UNSUPPORTED_OS_HASH = HashingUtils::HashString("UNSUPPORTED_OS");
        static const int SCAN_ELIGIBILITY_EXPIRED_HASH = HashingUtils::HashString("SCAN_ELIGIBILITY_EXPIRED");
        static const int RESOURCE_TERMINATED_HASH = HashingUtils::HashString("RESOURCE_TERMINATED");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int NO_RESOURCES_FOUND_HASH = HashingUtils::HashString("NO_RESOURCES_FOUND");
        static const int IMAGE_SIZE_EXCEEDED_HASH = HashingUtils::HashString("IMAGE_SIZE_EXCEEDED");
        static const int SCAN_FREQUENCY_MANUAL_HASH = HashingUtils::HashString("SCAN_FREQUENCY_MANUAL");
        static const int SCAN_FREQUENCY_SCAN_ON_PUSH_HASH = HashingUtils::HashString("SCAN_FREQUENCY_SCAN_ON_PUSH");
        static const int EC2_INSTANCE_STOPPED_HASH = HashingUtils::HashString("EC2_INSTANCE_STOPPED");
        static const int PENDING_DISABLE_HASH = HashingUtils::HashString("PENDING_DISABLE");
        static const int NO_INVENTORY_HASH = HashingUtils::HashString("NO_INVENTORY");
        static const int STALE_INVENTORY_HASH = HashingUtils::HashString("STALE_INVENTORY");
        static const int EXCLUDED_BY_TAG_HASH = HashingUtils::HashString("EXCLUDED_BY_TAG");
        static const int UNSUPPORTED_RUNTIME_HASH = HashingUtils::HashString("UNSUPPORTED_RUNTIME");


        ScanStatusReason GetScanStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
