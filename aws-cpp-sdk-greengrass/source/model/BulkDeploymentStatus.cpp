/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/BulkDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace BulkDeploymentStatusMapper
      {

        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        BulkDeploymentStatus GetBulkDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return BulkDeploymentStatus::Initializing;
          }
          else if (hashCode == Running_HASH)
          {
            return BulkDeploymentStatus::Running;
          }
          else if (hashCode == Completed_HASH)
          {
            return BulkDeploymentStatus::Completed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return BulkDeploymentStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return BulkDeploymentStatus::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return BulkDeploymentStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BulkDeploymentStatus>(hashCode);
          }

          return BulkDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForBulkDeploymentStatus(BulkDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case BulkDeploymentStatus::Initializing:
            return "Initializing";
          case BulkDeploymentStatus::Running:
            return "Running";
          case BulkDeploymentStatus::Completed:
            return "Completed";
          case BulkDeploymentStatus::Stopping:
            return "Stopping";
          case BulkDeploymentStatus::Stopped:
            return "Stopped";
          case BulkDeploymentStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BulkDeploymentStatusMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
