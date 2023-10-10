/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentComponentUpdatePolicyAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace DeploymentComponentUpdatePolicyActionMapper
      {

        static const int NOTIFY_COMPONENTS_HASH = HashingUtils::HashString("NOTIFY_COMPONENTS");
        static const int SKIP_NOTIFY_COMPONENTS_HASH = HashingUtils::HashString("SKIP_NOTIFY_COMPONENTS");


        DeploymentComponentUpdatePolicyAction GetDeploymentComponentUpdatePolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOTIFY_COMPONENTS_HASH)
          {
            return DeploymentComponentUpdatePolicyAction::NOTIFY_COMPONENTS;
          }
          else if (hashCode == SKIP_NOTIFY_COMPONENTS_HASH)
          {
            return DeploymentComponentUpdatePolicyAction::SKIP_NOTIFY_COMPONENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentComponentUpdatePolicyAction>(hashCode);
          }

          return DeploymentComponentUpdatePolicyAction::NOT_SET;
        }

        Aws::String GetNameForDeploymentComponentUpdatePolicyAction(DeploymentComponentUpdatePolicyAction enumValue)
        {
          switch(enumValue)
          {
          case DeploymentComponentUpdatePolicyAction::NOT_SET:
            return {};
          case DeploymentComponentUpdatePolicyAction::NOTIFY_COMPONENTS:
            return "NOTIFY_COMPONENTS";
          case DeploymentComponentUpdatePolicyAction::SKIP_NOTIFY_COMPONENTS:
            return "SKIP_NOTIFY_COMPONENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentComponentUpdatePolicyActionMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
