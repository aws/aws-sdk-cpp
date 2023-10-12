/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/SystemInstanceDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace SystemInstanceDeploymentStatusMapper
      {

        static constexpr uint32_t NOT_DEPLOYED_HASH = ConstExprHashingUtils::HashString("NOT_DEPLOYED");
        static constexpr uint32_t BOOTSTRAP_HASH = ConstExprHashingUtils::HashString("BOOTSTRAP");
        static constexpr uint32_t DEPLOY_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DEPLOY_IN_PROGRESS");
        static constexpr uint32_t DEPLOYED_IN_TARGET_HASH = ConstExprHashingUtils::HashString("DEPLOYED_IN_TARGET");
        static constexpr uint32_t UNDEPLOY_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UNDEPLOY_IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PENDING_DELETE_HASH = ConstExprHashingUtils::HashString("PENDING_DELETE");
        static constexpr uint32_t DELETED_IN_TARGET_HASH = ConstExprHashingUtils::HashString("DELETED_IN_TARGET");


        SystemInstanceDeploymentStatus GetSystemInstanceDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_DEPLOYED_HASH)
          {
            return SystemInstanceDeploymentStatus::NOT_DEPLOYED;
          }
          else if (hashCode == BOOTSTRAP_HASH)
          {
            return SystemInstanceDeploymentStatus::BOOTSTRAP;
          }
          else if (hashCode == DEPLOY_IN_PROGRESS_HASH)
          {
            return SystemInstanceDeploymentStatus::DEPLOY_IN_PROGRESS;
          }
          else if (hashCode == DEPLOYED_IN_TARGET_HASH)
          {
            return SystemInstanceDeploymentStatus::DEPLOYED_IN_TARGET;
          }
          else if (hashCode == UNDEPLOY_IN_PROGRESS_HASH)
          {
            return SystemInstanceDeploymentStatus::UNDEPLOY_IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SystemInstanceDeploymentStatus::FAILED;
          }
          else if (hashCode == PENDING_DELETE_HASH)
          {
            return SystemInstanceDeploymentStatus::PENDING_DELETE;
          }
          else if (hashCode == DELETED_IN_TARGET_HASH)
          {
            return SystemInstanceDeploymentStatus::DELETED_IN_TARGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SystemInstanceDeploymentStatus>(hashCode);
          }

          return SystemInstanceDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForSystemInstanceDeploymentStatus(SystemInstanceDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case SystemInstanceDeploymentStatus::NOT_SET:
            return {};
          case SystemInstanceDeploymentStatus::NOT_DEPLOYED:
            return "NOT_DEPLOYED";
          case SystemInstanceDeploymentStatus::BOOTSTRAP:
            return "BOOTSTRAP";
          case SystemInstanceDeploymentStatus::DEPLOY_IN_PROGRESS:
            return "DEPLOY_IN_PROGRESS";
          case SystemInstanceDeploymentStatus::DEPLOYED_IN_TARGET:
            return "DEPLOYED_IN_TARGET";
          case SystemInstanceDeploymentStatus::UNDEPLOY_IN_PROGRESS:
            return "UNDEPLOY_IN_PROGRESS";
          case SystemInstanceDeploymentStatus::FAILED:
            return "FAILED";
          case SystemInstanceDeploymentStatus::PENDING_DELETE:
            return "PENDING_DELETE";
          case SystemInstanceDeploymentStatus::DELETED_IN_TARGET:
            return "DELETED_IN_TARGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SystemInstanceDeploymentStatusMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
