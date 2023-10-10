/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/DeploymentAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameSparks
  {
    namespace Model
    {
      namespace DeploymentActionMapper
      {

        static const int DEPLOY_HASH = HashingUtils::HashString("DEPLOY");
        static const int UNDEPLOY_HASH = HashingUtils::HashString("UNDEPLOY");


        DeploymentAction GetDeploymentActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOY_HASH)
          {
            return DeploymentAction::DEPLOY;
          }
          else if (hashCode == UNDEPLOY_HASH)
          {
            return DeploymentAction::UNDEPLOY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentAction>(hashCode);
          }

          return DeploymentAction::NOT_SET;
        }

        Aws::String GetNameForDeploymentAction(DeploymentAction enumValue)
        {
          switch(enumValue)
          {
          case DeploymentAction::NOT_SET:
            return {};
          case DeploymentAction::DEPLOY:
            return "DEPLOY";
          case DeploymentAction::UNDEPLOY:
            return "UNDEPLOY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentActionMapper
    } // namespace Model
  } // namespace GameSparks
} // namespace Aws
