/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DiscoveryJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace DiscoveryJobStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int COMPLETED_WITH_ISSUES_HASH = HashingUtils::HashString("COMPLETED_WITH_ISSUES");


        DiscoveryJobStatus GetDiscoveryJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DiscoveryJobStatus::RUNNING;
          }
          else if (hashCode == WARNING_HASH)
          {
            return DiscoveryJobStatus::WARNING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return DiscoveryJobStatus::TERMINATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DiscoveryJobStatus::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DiscoveryJobStatus::STOPPED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DiscoveryJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_ISSUES_HASH)
          {
            return DiscoveryJobStatus::COMPLETED_WITH_ISSUES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryJobStatus>(hashCode);
          }

          return DiscoveryJobStatus::NOT_SET;
        }

        Aws::String GetNameForDiscoveryJobStatus(DiscoveryJobStatus enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryJobStatus::NOT_SET:
            return {};
          case DiscoveryJobStatus::RUNNING:
            return "RUNNING";
          case DiscoveryJobStatus::WARNING:
            return "WARNING";
          case DiscoveryJobStatus::TERMINATED:
            return "TERMINATED";
          case DiscoveryJobStatus::FAILED:
            return "FAILED";
          case DiscoveryJobStatus::STOPPED:
            return "STOPPED";
          case DiscoveryJobStatus::COMPLETED:
            return "COMPLETED";
          case DiscoveryJobStatus::COMPLETED_WITH_ISSUES:
            return "COMPLETED_WITH_ISSUES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryJobStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
