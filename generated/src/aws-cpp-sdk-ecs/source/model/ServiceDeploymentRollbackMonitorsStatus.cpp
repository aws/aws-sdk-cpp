/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeploymentRollbackMonitorsStatus.h>
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
      namespace ServiceDeploymentRollbackMonitorsStatusMapper
      {

        static const int TRIGGERED_HASH = HashingUtils::HashString("TRIGGERED");
        static const int MONITORING_HASH = HashingUtils::HashString("MONITORING");
        static const int MONITORING_COMPLETE_HASH = HashingUtils::HashString("MONITORING_COMPLETE");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ServiceDeploymentRollbackMonitorsStatus GetServiceDeploymentRollbackMonitorsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIGGERED_HASH)
          {
            return ServiceDeploymentRollbackMonitorsStatus::TRIGGERED;
          }
          else if (hashCode == MONITORING_HASH)
          {
            return ServiceDeploymentRollbackMonitorsStatus::MONITORING;
          }
          else if (hashCode == MONITORING_COMPLETE_HASH)
          {
            return ServiceDeploymentRollbackMonitorsStatus::MONITORING_COMPLETE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ServiceDeploymentRollbackMonitorsStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceDeploymentRollbackMonitorsStatus>(hashCode);
          }

          return ServiceDeploymentRollbackMonitorsStatus::NOT_SET;
        }

        Aws::String GetNameForServiceDeploymentRollbackMonitorsStatus(ServiceDeploymentRollbackMonitorsStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceDeploymentRollbackMonitorsStatus::NOT_SET:
            return {};
          case ServiceDeploymentRollbackMonitorsStatus::TRIGGERED:
            return "TRIGGERED";
          case ServiceDeploymentRollbackMonitorsStatus::MONITORING:
            return "MONITORING";
          case ServiceDeploymentRollbackMonitorsStatus::MONITORING_COMPLETE:
            return "MONITORING_COMPLETE";
          case ServiceDeploymentRollbackMonitorsStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceDeploymentRollbackMonitorsStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
