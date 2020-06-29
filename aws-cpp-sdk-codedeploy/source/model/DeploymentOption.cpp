/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace DeploymentOptionMapper
      {

        static const int WITH_TRAFFIC_CONTROL_HASH = HashingUtils::HashString("WITH_TRAFFIC_CONTROL");
        static const int WITHOUT_TRAFFIC_CONTROL_HASH = HashingUtils::HashString("WITHOUT_TRAFFIC_CONTROL");


        DeploymentOption GetDeploymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WITH_TRAFFIC_CONTROL_HASH)
          {
            return DeploymentOption::WITH_TRAFFIC_CONTROL;
          }
          else if (hashCode == WITHOUT_TRAFFIC_CONTROL_HASH)
          {
            return DeploymentOption::WITHOUT_TRAFFIC_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentOption>(hashCode);
          }

          return DeploymentOption::NOT_SET;
        }

        Aws::String GetNameForDeploymentOption(DeploymentOption enumValue)
        {
          switch(enumValue)
          {
          case DeploymentOption::WITH_TRAFFIC_CONTROL:
            return "WITH_TRAFFIC_CONTROL";
          case DeploymentOption::WITHOUT_TRAFFIC_CONTROL:
            return "WITHOUT_TRAFFIC_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentOptionMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
