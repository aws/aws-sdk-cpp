/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace DeploymentStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static const int ROLLBACK_COMPLETE_HASH = HashingUtils::HashString("ROLLBACK_COMPLETE");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return DeploymentStatus::IMPAIRED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return DeploymentStatus::COMPLETE;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return DeploymentStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_COMPLETE_HASH)
          {
            return DeploymentStatus::ROLLBACK_COMPLETE;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return DeploymentStatus::CANCELLED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DeploymentStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentStatus>(hashCode);
          }

          return DeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForDeploymentStatus(DeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case DeploymentStatus::NOT_SET:
            return {};
          case DeploymentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeploymentStatus::IMPAIRED:
            return "IMPAIRED";
          case DeploymentStatus::COMPLETE:
            return "COMPLETE";
          case DeploymentStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case DeploymentStatus::ROLLBACK_COMPLETE:
            return "ROLLBACK_COMPLETE";
          case DeploymentStatus::CANCELLED:
            return "CANCELLED";
          case DeploymentStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
