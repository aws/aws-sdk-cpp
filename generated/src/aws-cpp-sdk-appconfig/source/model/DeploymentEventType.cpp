/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeploymentEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace DeploymentEventTypeMapper
      {

        static constexpr uint32_t PERCENTAGE_UPDATED_HASH = ConstExprHashingUtils::HashString("PERCENTAGE_UPDATED");
        static constexpr uint32_t ROLLBACK_STARTED_HASH = ConstExprHashingUtils::HashString("ROLLBACK_STARTED");
        static constexpr uint32_t ROLLBACK_COMPLETED_HASH = ConstExprHashingUtils::HashString("ROLLBACK_COMPLETED");
        static constexpr uint32_t BAKE_TIME_STARTED_HASH = ConstExprHashingUtils::HashString("BAKE_TIME_STARTED");
        static constexpr uint32_t DEPLOYMENT_STARTED_HASH = ConstExprHashingUtils::HashString("DEPLOYMENT_STARTED");
        static constexpr uint32_t DEPLOYMENT_COMPLETED_HASH = ConstExprHashingUtils::HashString("DEPLOYMENT_COMPLETED");


        DeploymentEventType GetDeploymentEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERCENTAGE_UPDATED_HASH)
          {
            return DeploymentEventType::PERCENTAGE_UPDATED;
          }
          else if (hashCode == ROLLBACK_STARTED_HASH)
          {
            return DeploymentEventType::ROLLBACK_STARTED;
          }
          else if (hashCode == ROLLBACK_COMPLETED_HASH)
          {
            return DeploymentEventType::ROLLBACK_COMPLETED;
          }
          else if (hashCode == BAKE_TIME_STARTED_HASH)
          {
            return DeploymentEventType::BAKE_TIME_STARTED;
          }
          else if (hashCode == DEPLOYMENT_STARTED_HASH)
          {
            return DeploymentEventType::DEPLOYMENT_STARTED;
          }
          else if (hashCode == DEPLOYMENT_COMPLETED_HASH)
          {
            return DeploymentEventType::DEPLOYMENT_COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentEventType>(hashCode);
          }

          return DeploymentEventType::NOT_SET;
        }

        Aws::String GetNameForDeploymentEventType(DeploymentEventType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentEventType::NOT_SET:
            return {};
          case DeploymentEventType::PERCENTAGE_UPDATED:
            return "PERCENTAGE_UPDATED";
          case DeploymentEventType::ROLLBACK_STARTED:
            return "ROLLBACK_STARTED";
          case DeploymentEventType::ROLLBACK_COMPLETED:
            return "ROLLBACK_COMPLETED";
          case DeploymentEventType::BAKE_TIME_STARTED:
            return "BAKE_TIME_STARTED";
          case DeploymentEventType::DEPLOYMENT_STARTED:
            return "DEPLOYMENT_STARTED";
          case DeploymentEventType::DEPLOYMENT_COMPLETED:
            return "DEPLOYMENT_COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentEventTypeMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
