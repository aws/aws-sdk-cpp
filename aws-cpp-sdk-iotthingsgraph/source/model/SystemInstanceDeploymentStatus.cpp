/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int NOT_DEPLOYED_HASH = HashingUtils::HashString("NOT_DEPLOYED");
        static const int BOOTSTRAP_HASH = HashingUtils::HashString("BOOTSTRAP");
        static const int DEPLOY_IN_PROGRESS_HASH = HashingUtils::HashString("DEPLOY_IN_PROGRESS");
        static const int DEPLOYED_IN_TARGET_HASH = HashingUtils::HashString("DEPLOYED_IN_TARGET");
        static const int UNDEPLOY_IN_PROGRESS_HASH = HashingUtils::HashString("UNDEPLOY_IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_DELETE_HASH = HashingUtils::HashString("PENDING_DELETE");
        static const int DELETED_IN_TARGET_HASH = HashingUtils::HashString("DELETED_IN_TARGET");


        SystemInstanceDeploymentStatus GetSystemInstanceDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
