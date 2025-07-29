/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ServiceJobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNABLE_HASH = HashingUtils::HashString("RUNNABLE");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ServiceJobStatus GetServiceJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ServiceJobStatus::SUBMITTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ServiceJobStatus::PENDING;
          }
          else if (hashCode == RUNNABLE_HASH)
          {
            return ServiceJobStatus::RUNNABLE;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return ServiceJobStatus::SCHEDULED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ServiceJobStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ServiceJobStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ServiceJobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ServiceJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceJobStatus>(hashCode);
          }

          return ServiceJobStatus::NOT_SET;
        }

        Aws::String GetNameForServiceJobStatus(ServiceJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceJobStatus::NOT_SET:
            return {};
          case ServiceJobStatus::SUBMITTED:
            return "SUBMITTED";
          case ServiceJobStatus::PENDING:
            return "PENDING";
          case ServiceJobStatus::RUNNABLE:
            return "RUNNABLE";
          case ServiceJobStatus::SCHEDULED:
            return "SCHEDULED";
          case ServiceJobStatus::STARTING:
            return "STARTING";
          case ServiceJobStatus::RUNNING:
            return "RUNNING";
          case ServiceJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ServiceJobStatus::FAILED:
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

      } // namespace ServiceJobStatusMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
