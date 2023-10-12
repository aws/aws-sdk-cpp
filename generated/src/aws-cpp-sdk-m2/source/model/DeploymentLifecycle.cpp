/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DeploymentLifecycle.h>
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
      namespace DeploymentLifecycleMapper
      {

        static constexpr uint32_t Deploying_HASH = ConstExprHashingUtils::HashString("Deploying");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        DeploymentLifecycle GetDeploymentLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deploying_HASH)
          {
            return DeploymentLifecycle::Deploying;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return DeploymentLifecycle::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return DeploymentLifecycle::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentLifecycle>(hashCode);
          }

          return DeploymentLifecycle::NOT_SET;
        }

        Aws::String GetNameForDeploymentLifecycle(DeploymentLifecycle enumValue)
        {
          switch(enumValue)
          {
          case DeploymentLifecycle::NOT_SET:
            return {};
          case DeploymentLifecycle::Deploying:
            return "Deploying";
          case DeploymentLifecycle::Succeeded:
            return "Succeeded";
          case DeploymentLifecycle::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentLifecycleMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
