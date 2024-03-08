/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/DeploymentFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LaunchWizard
  {
    namespace Model
    {
      namespace DeploymentFilterKeyMapper
      {

        static const int WORKLOAD_NAME_HASH = HashingUtils::HashString("WORKLOAD_NAME");
        static const int DEPLOYMENT_STATUS_HASH = HashingUtils::HashString("DEPLOYMENT_STATUS");


        DeploymentFilterKey GetDeploymentFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKLOAD_NAME_HASH)
          {
            return DeploymentFilterKey::WORKLOAD_NAME;
          }
          else if (hashCode == DEPLOYMENT_STATUS_HASH)
          {
            return DeploymentFilterKey::DEPLOYMENT_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentFilterKey>(hashCode);
          }

          return DeploymentFilterKey::NOT_SET;
        }

        Aws::String GetNameForDeploymentFilterKey(DeploymentFilterKey enumValue)
        {
          switch(enumValue)
          {
          case DeploymentFilterKey::NOT_SET:
            return {};
          case DeploymentFilterKey::WORKLOAD_NAME:
            return "WORKLOAD_NAME";
          case DeploymentFilterKey::DEPLOYMENT_STATUS:
            return "DEPLOYMENT_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentFilterKeyMapper
    } // namespace Model
  } // namespace LaunchWizard
} // namespace Aws
