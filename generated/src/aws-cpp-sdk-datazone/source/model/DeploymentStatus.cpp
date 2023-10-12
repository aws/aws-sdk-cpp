/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DeploymentStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("SUCCESSFUL");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PENDING_DEPLOYMENT_HASH = ConstExprHashingUtils::HashString("PENDING_DEPLOYMENT");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DeploymentStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return DeploymentStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeploymentStatus::FAILED;
          }
          else if (hashCode == PENDING_DEPLOYMENT_HASH)
          {
            return DeploymentStatus::PENDING_DEPLOYMENT;
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
          case DeploymentStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case DeploymentStatus::FAILED:
            return "FAILED";
          case DeploymentStatus::PENDING_DEPLOYMENT:
            return "PENDING_DEPLOYMENT";
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
  } // namespace DataZone
} // namespace Aws
