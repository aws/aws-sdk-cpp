/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DeploymentMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace DeploymentModeMapper
      {

        static const int SINGLE_INSTANCE_HASH = HashingUtils::HashString("SINGLE_INSTANCE");
        static const int ACTIVE_STANDBY_MULTI_AZ_HASH = HashingUtils::HashString("ACTIVE_STANDBY_MULTI_AZ");
        static const int CLUSTER_MULTI_AZ_HASH = HashingUtils::HashString("CLUSTER_MULTI_AZ");


        DeploymentMode GetDeploymentModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_INSTANCE_HASH)
          {
            return DeploymentMode::SINGLE_INSTANCE;
          }
          else if (hashCode == ACTIVE_STANDBY_MULTI_AZ_HASH)
          {
            return DeploymentMode::ACTIVE_STANDBY_MULTI_AZ;
          }
          else if (hashCode == CLUSTER_MULTI_AZ_HASH)
          {
            return DeploymentMode::CLUSTER_MULTI_AZ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentMode>(hashCode);
          }

          return DeploymentMode::NOT_SET;
        }

        Aws::String GetNameForDeploymentMode(DeploymentMode enumValue)
        {
          switch(enumValue)
          {
          case DeploymentMode::SINGLE_INSTANCE:
            return "SINGLE_INSTANCE";
          case DeploymentMode::ACTIVE_STANDBY_MULTI_AZ:
            return "ACTIVE_STANDBY_MULTI_AZ";
          case DeploymentMode::CLUSTER_MULTI_AZ:
            return "CLUSTER_MULTI_AZ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentModeMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
