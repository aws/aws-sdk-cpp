/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeploymentLifecycleStage.h>
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
      namespace ServiceDeploymentLifecycleStageMapper
      {

        static const int RECONCILE_SERVICE_HASH = HashingUtils::HashString("RECONCILE_SERVICE");
        static const int PRE_SCALE_UP_HASH = HashingUtils::HashString("PRE_SCALE_UP");
        static const int SCALE_UP_HASH = HashingUtils::HashString("SCALE_UP");
        static const int POST_SCALE_UP_HASH = HashingUtils::HashString("POST_SCALE_UP");
        static const int TEST_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("TEST_TRAFFIC_SHIFT");
        static const int POST_TEST_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("POST_TEST_TRAFFIC_SHIFT");
        static const int PRODUCTION_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("PRODUCTION_TRAFFIC_SHIFT");
        static const int POST_PRODUCTION_TRAFFIC_SHIFT_HASH = HashingUtils::HashString("POST_PRODUCTION_TRAFFIC_SHIFT");
        static const int BAKE_TIME_HASH = HashingUtils::HashString("BAKE_TIME");
        static const int CLEAN_UP_HASH = HashingUtils::HashString("CLEAN_UP");


        ServiceDeploymentLifecycleStage GetServiceDeploymentLifecycleStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECONCILE_SERVICE_HASH)
          {
            return ServiceDeploymentLifecycleStage::RECONCILE_SERVICE;
          }
          else if (hashCode == PRE_SCALE_UP_HASH)
          {
            return ServiceDeploymentLifecycleStage::PRE_SCALE_UP;
          }
          else if (hashCode == SCALE_UP_HASH)
          {
            return ServiceDeploymentLifecycleStage::SCALE_UP;
          }
          else if (hashCode == POST_SCALE_UP_HASH)
          {
            return ServiceDeploymentLifecycleStage::POST_SCALE_UP;
          }
          else if (hashCode == TEST_TRAFFIC_SHIFT_HASH)
          {
            return ServiceDeploymentLifecycleStage::TEST_TRAFFIC_SHIFT;
          }
          else if (hashCode == POST_TEST_TRAFFIC_SHIFT_HASH)
          {
            return ServiceDeploymentLifecycleStage::POST_TEST_TRAFFIC_SHIFT;
          }
          else if (hashCode == PRODUCTION_TRAFFIC_SHIFT_HASH)
          {
            return ServiceDeploymentLifecycleStage::PRODUCTION_TRAFFIC_SHIFT;
          }
          else if (hashCode == POST_PRODUCTION_TRAFFIC_SHIFT_HASH)
          {
            return ServiceDeploymentLifecycleStage::POST_PRODUCTION_TRAFFIC_SHIFT;
          }
          else if (hashCode == BAKE_TIME_HASH)
          {
            return ServiceDeploymentLifecycleStage::BAKE_TIME;
          }
          else if (hashCode == CLEAN_UP_HASH)
          {
            return ServiceDeploymentLifecycleStage::CLEAN_UP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceDeploymentLifecycleStage>(hashCode);
          }

          return ServiceDeploymentLifecycleStage::NOT_SET;
        }

        Aws::String GetNameForServiceDeploymentLifecycleStage(ServiceDeploymentLifecycleStage enumValue)
        {
          switch(enumValue)
          {
          case ServiceDeploymentLifecycleStage::NOT_SET:
            return {};
          case ServiceDeploymentLifecycleStage::RECONCILE_SERVICE:
            return "RECONCILE_SERVICE";
          case ServiceDeploymentLifecycleStage::PRE_SCALE_UP:
            return "PRE_SCALE_UP";
          case ServiceDeploymentLifecycleStage::SCALE_UP:
            return "SCALE_UP";
          case ServiceDeploymentLifecycleStage::POST_SCALE_UP:
            return "POST_SCALE_UP";
          case ServiceDeploymentLifecycleStage::TEST_TRAFFIC_SHIFT:
            return "TEST_TRAFFIC_SHIFT";
          case ServiceDeploymentLifecycleStage::POST_TEST_TRAFFIC_SHIFT:
            return "POST_TEST_TRAFFIC_SHIFT";
          case ServiceDeploymentLifecycleStage::PRODUCTION_TRAFFIC_SHIFT:
            return "PRODUCTION_TRAFFIC_SHIFT";
          case ServiceDeploymentLifecycleStage::POST_PRODUCTION_TRAFFIC_SHIFT:
            return "POST_PRODUCTION_TRAFFIC_SHIFT";
          case ServiceDeploymentLifecycleStage::BAKE_TIME:
            return "BAKE_TIME";
          case ServiceDeploymentLifecycleStage::CLEAN_UP:
            return "CLEAN_UP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceDeploymentLifecycleStageMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
