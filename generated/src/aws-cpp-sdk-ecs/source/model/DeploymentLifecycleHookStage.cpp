/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentLifecycleHookStage.h>
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
      namespace DeploymentLifecycleHookStageMapper
      {

        static const int RECONCILE_SERVICE_HASH = HashingUtils::HashString("RECONCILE_SERVICE");
        static const int PRE_SCALE_UP_HASH = HashingUtils::HashString("PRE_SCALE_UP");
        static const int POST_SCALE_UP_HASH = HashingUtils::HashString("POST_SCALE_UP");
        static const int TEST_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("TEST_TRAFFIC_SHIFT");
        static const int POST_TEST_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("POST_TEST_TRAFFIC_SHIFT");
        static const int PRODUCTION_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("PRODUCTION_TRAFFIC_SHIFT");
        static const int POST_PRODUCTION_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("POST_PRODUCTION_TRAFFIC_SHIFT");


        DeploymentLifecycleHookStage GetDeploymentLifecycleHookStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECONCILE_SERVICE_HASH)
          {
            return DeploymentLifecycleHookStage::RECONCILE_SERVICE;
          }
          else if (hashCode == PRE_SCALE_UP_HASH)
          {
            return DeploymentLifecycleHookStage::PRE_SCALE_UP;
          }
          else if (hashCode == POST_SCALE_UP_HASH)
          {
            return DeploymentLifecycleHookStage::POST_SCALE_UP;
          }
          else if (hashCode == TEST_TRAFFIC_SHIFT_HASH)
          {
            return DeploymentLifecycleHookStage::TEST_TRAFFIC_SHIFT;
          }
          else if (hashCode == POST_TEST_TRAFFIC_SHIFT_HASH)
          {
            return DeploymentLifecycleHookStage::POST_TEST_TRAFFIC_SHIFT;
          }
          else if (hashCode == PRODUCTION_TRAFFIC_SHIFT_HASH)
          {
            return DeploymentLifecycleHookStage::PRODUCTION_TRAFFIC_SHIFT;
          }
          else if (hashCode == POST_PRODUCTION_TRAFFIC_SHIFT_HASH)
          {
            return DeploymentLifecycleHookStage::POST_PRODUCTION_TRAFFIC_SHIFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentLifecycleHookStage>(hashCode);
          }

          return DeploymentLifecycleHookStage::NOT_SET;
        }

        Aws::String GetNameForDeploymentLifecycleHookStage(DeploymentLifecycleHookStage enumValue)
        {
          switch(enumValue)
          {
          case DeploymentLifecycleHookStage::NOT_SET:
            return {};
          case DeploymentLifecycleHookStage::RECONCILE_SERVICE:
            return "RECONCILE_SERVICE";
          case DeploymentLifecycleHookStage::PRE_SCALE_UP:
            return "PRE_SCALE_UP";
          case DeploymentLifecycleHookStage::POST_SCALE_UP:
            return "POST_SCALE_UP";
          case DeploymentLifecycleHookStage::TEST_TRAFFIC_SHIFT:
            return "TEST_TRAFFIC_SHIFT";
          case DeploymentLifecycleHookStage::POST_TEST_TRAFFIC_SHIFT:
            return "POST_TEST_TRAFFIC_SHIFT";
          case DeploymentLifecycleHookStage::PRODUCTION_TRAFFIC_SHIFT:
            return "PRODUCTION_TRAFFIC_SHIFT";
          case DeploymentLifecycleHookStage::POST_PRODUCTION_TRAFFIC_SHIFT:
            return "POST_PRODUCTION_TRAFFIC_SHIFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentLifecycleHookStageMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
