/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/WorkloadDeploymentPatternStatus.h>
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
      namespace WorkloadDeploymentPatternStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        WorkloadDeploymentPatternStatus GetWorkloadDeploymentPatternStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return WorkloadDeploymentPatternStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return WorkloadDeploymentPatternStatus::INACTIVE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return WorkloadDeploymentPatternStatus::DISABLED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return WorkloadDeploymentPatternStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadDeploymentPatternStatus>(hashCode);
          }

          return WorkloadDeploymentPatternStatus::NOT_SET;
        }

        Aws::String GetNameForWorkloadDeploymentPatternStatus(WorkloadDeploymentPatternStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkloadDeploymentPatternStatus::NOT_SET:
            return {};
          case WorkloadDeploymentPatternStatus::ACTIVE:
            return "ACTIVE";
          case WorkloadDeploymentPatternStatus::INACTIVE:
            return "INACTIVE";
          case WorkloadDeploymentPatternStatus::DISABLED:
            return "DISABLED";
          case WorkloadDeploymentPatternStatus::DELETED:
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

      } // namespace WorkloadDeploymentPatternStatusMapper
    } // namespace Model
  } // namespace LaunchWizard
} // namespace Aws
