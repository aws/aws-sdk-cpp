/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace WirelessGatewayTaskStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FIRST_RETRY_HASH = HashingUtils::HashString("FIRST_RETRY");
        static const int SECOND_RETRY_HASH = HashingUtils::HashString("SECOND_RETRY");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        WirelessGatewayTaskStatus GetWirelessGatewayTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return WirelessGatewayTaskStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return WirelessGatewayTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == FIRST_RETRY_HASH)
          {
            return WirelessGatewayTaskStatus::FIRST_RETRY;
          }
          else if (hashCode == SECOND_RETRY_HASH)
          {
            return WirelessGatewayTaskStatus::SECOND_RETRY;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return WirelessGatewayTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WirelessGatewayTaskStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessGatewayTaskStatus>(hashCode);
          }

          return WirelessGatewayTaskStatus::NOT_SET;
        }

        Aws::String GetNameForWirelessGatewayTaskStatus(WirelessGatewayTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case WirelessGatewayTaskStatus::NOT_SET:
            return {};
          case WirelessGatewayTaskStatus::PENDING:
            return "PENDING";
          case WirelessGatewayTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case WirelessGatewayTaskStatus::FIRST_RETRY:
            return "FIRST_RETRY";
          case WirelessGatewayTaskStatus::SECOND_RETRY:
            return "SECOND_RETRY";
          case WirelessGatewayTaskStatus::COMPLETED:
            return "COMPLETED";
          case WirelessGatewayTaskStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessGatewayTaskStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
