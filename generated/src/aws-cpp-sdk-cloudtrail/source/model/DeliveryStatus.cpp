/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DeliveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace DeliveryStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t FAILED_SIGNING_FILE_HASH = ConstExprHashingUtils::HashString("FAILED_SIGNING_FILE");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RESOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("RESOURCE_NOT_FOUND");
        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t ACCESS_DENIED_SIGNING_FILE_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED_SIGNING_FILE");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        DeliveryStatus GetDeliveryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return DeliveryStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeliveryStatus::FAILED;
          }
          else if (hashCode == FAILED_SIGNING_FILE_HASH)
          {
            return DeliveryStatus::FAILED_SIGNING_FILE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DeliveryStatus::PENDING;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return DeliveryStatus::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return DeliveryStatus::ACCESS_DENIED;
          }
          else if (hashCode == ACCESS_DENIED_SIGNING_FILE_HASH)
          {
            return DeliveryStatus::ACCESS_DENIED_SIGNING_FILE;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return DeliveryStatus::CANCELLED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DeliveryStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStatus>(hashCode);
          }

          return DeliveryStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStatus::NOT_SET:
            return {};
          case DeliveryStatus::SUCCESS:
            return "SUCCESS";
          case DeliveryStatus::FAILED:
            return "FAILED";
          case DeliveryStatus::FAILED_SIGNING_FILE:
            return "FAILED_SIGNING_FILE";
          case DeliveryStatus::PENDING:
            return "PENDING";
          case DeliveryStatus::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case DeliveryStatus::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case DeliveryStatus::ACCESS_DENIED_SIGNING_FILE:
            return "ACCESS_DENIED_SIGNING_FILE";
          case DeliveryStatus::CANCELLED:
            return "CANCELLED";
          case DeliveryStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
