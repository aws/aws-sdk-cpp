/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace OtaTaskExecutionStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        OtaTaskExecutionStatus GetOtaTaskExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return OtaTaskExecutionStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return OtaTaskExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return OtaTaskExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OtaTaskExecutionStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return OtaTaskExecutionStatus::TIMED_OUT;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return OtaTaskExecutionStatus::REJECTED;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return OtaTaskExecutionStatus::REMOVED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return OtaTaskExecutionStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OtaTaskExecutionStatus>(hashCode);
          }

          return OtaTaskExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForOtaTaskExecutionStatus(OtaTaskExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case OtaTaskExecutionStatus::NOT_SET:
            return {};
          case OtaTaskExecutionStatus::QUEUED:
            return "QUEUED";
          case OtaTaskExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OtaTaskExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case OtaTaskExecutionStatus::FAILED:
            return "FAILED";
          case OtaTaskExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          case OtaTaskExecutionStatus::REJECTED:
            return "REJECTED";
          case OtaTaskExecutionStatus::REMOVED:
            return "REMOVED";
          case OtaTaskExecutionStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OtaTaskExecutionStatusMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
