/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ServiceDeploymentStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ROLLBACK_REQUESTED_HASH = HashingUtils::HashString("ROLLBACK_REQUESTED");
        static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static const int ROLLBACK_SUCCESSFUL_HASH = HashingUtils::HashString("ROLLBACK_SUCCESSFUL");
        static const int ROLLBACK_FAILED_HASH = HashingUtils::HashString("ROLLBACK_FAILED");


        ServiceDeploymentStatus GetServiceDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ServiceDeploymentStatus::PENDING;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return ServiceDeploymentStatus::SUCCESSFUL;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ServiceDeploymentStatus::STOPPED;
          }
          else if (hashCode == STOP_REQUESTED_HASH)
          {
            return ServiceDeploymentStatus::STOP_REQUESTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ServiceDeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_REQUESTED_HASH)
          {
            return ServiceDeploymentStatus::ROLLBACK_REQUESTED;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return ServiceDeploymentStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_SUCCESSFUL_HASH)
          {
            return ServiceDeploymentStatus::ROLLBACK_SUCCESSFUL;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return ServiceDeploymentStatus::ROLLBACK_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceDeploymentStatus>(hashCode);
          }

          return ServiceDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForServiceDeploymentStatus(ServiceDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceDeploymentStatus::NOT_SET:
            return {};
          case ServiceDeploymentStatus::PENDING:
            return "PENDING";
          case ServiceDeploymentStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case ServiceDeploymentStatus::STOPPED:
            return "STOPPED";
          case ServiceDeploymentStatus::STOP_REQUESTED:
            return "STOP_REQUESTED";
          case ServiceDeploymentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ServiceDeploymentStatus::ROLLBACK_REQUESTED:
            return "ROLLBACK_REQUESTED";
          case ServiceDeploymentStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case ServiceDeploymentStatus::ROLLBACK_SUCCESSFUL:
            return "ROLLBACK_SUCCESSFUL";
          case ServiceDeploymentStatus::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceDeploymentStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
