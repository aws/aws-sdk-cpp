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

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t WARNING_HASH = ConstExprHashingUtils::HashString("WARNING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t COMPLETED_WITH_ISSUES_HASH = ConstExprHashingUtils::HashString("COMPLETED_WITH_ISSUES");


        DiscoveryJobStatus GetDiscoveryJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
