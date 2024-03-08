/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/WorkloadStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LaunchWizard
  {
    namespace Model
    {
      namespace WorkloadStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        WorkloadStatus GetWorkloadStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return WorkloadStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return WorkloadStatus::INACTIVE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return WorkloadStatus::DISABLED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return WorkloadStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadStatus>(hashCode);
          }

          return WorkloadStatus::NOT_SET;
        }

        Aws::String GetNameForWorkloadStatus(WorkloadStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkloadStatus::NOT_SET:
            return {};
          case WorkloadStatus::ACTIVE:
            return "ACTIVE";
          case WorkloadStatus::INACTIVE:
            return "INACTIVE";
          case WorkloadStatus::DISABLED:
            return "DISABLED";
          case WorkloadStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkloadStatusMapper
    } // namespace Model
  } // namespace LaunchWizard
} // namespace Aws
