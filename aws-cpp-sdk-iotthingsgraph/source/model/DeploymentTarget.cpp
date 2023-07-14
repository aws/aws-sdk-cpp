/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DeploymentTarget.h>
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
      namespace DeploymentTargetMapper
      {

        static const int GREENGRASS_HASH = HashingUtils::HashString("GREENGRASS");
        static const int CLOUD_HASH = HashingUtils::HashString("CLOUD");


        DeploymentTarget GetDeploymentTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREENGRASS_HASH)
          {
            return DeploymentTarget::GREENGRASS;
          }
          else if (hashCode == CLOUD_HASH)
          {
            return DeploymentTarget::CLOUD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentTarget>(hashCode);
          }

          return DeploymentTarget::NOT_SET;
        }

        Aws::String GetNameForDeploymentTarget(DeploymentTarget enumValue)
        {
          switch(enumValue)
          {
          case DeploymentTarget::GREENGRASS:
            return "GREENGRASS";
          case DeploymentTarget::CLOUD:
            return "CLOUD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentTargetMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
