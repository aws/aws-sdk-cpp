/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ApplicationDeploymentLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace ApplicationDeploymentLifecycleMapper
      {

        static const int Deploying_HASH = HashingUtils::HashString("Deploying");
        static const int Deployed_HASH = HashingUtils::HashString("Deployed");


        ApplicationDeploymentLifecycle GetApplicationDeploymentLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deploying_HASH)
          {
            return ApplicationDeploymentLifecycle::Deploying;
          }
          else if (hashCode == Deployed_HASH)
          {
            return ApplicationDeploymentLifecycle::Deployed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationDeploymentLifecycle>(hashCode);
          }

          return ApplicationDeploymentLifecycle::NOT_SET;
        }

        Aws::String GetNameForApplicationDeploymentLifecycle(ApplicationDeploymentLifecycle enumValue)
        {
          switch(enumValue)
          {
          case ApplicationDeploymentLifecycle::NOT_SET:
            return {};
          case ApplicationDeploymentLifecycle::Deploying:
            return "Deploying";
          case ApplicationDeploymentLifecycle::Deployed:
            return "Deployed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationDeploymentLifecycleMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
