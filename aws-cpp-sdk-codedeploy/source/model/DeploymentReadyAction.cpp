/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/codedeploy/model/DeploymentReadyAction.h>
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
      namespace DeploymentReadyActionMapper
      {

        static const int CONTINUE_DEPLOYMENT_HASH = HashingUtils::HashString("CONTINUE_DEPLOYMENT");
        static const int STOP_DEPLOYMENT_HASH = HashingUtils::HashString("STOP_DEPLOYMENT");


        DeploymentReadyAction GetDeploymentReadyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_DEPLOYMENT_HASH)
          {
            return DeploymentReadyAction::CONTINUE_DEPLOYMENT;
          }
          else if (hashCode == STOP_DEPLOYMENT_HASH)
          {
            return DeploymentReadyAction::STOP_DEPLOYMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentReadyAction>(hashCode);
          }

          return DeploymentReadyAction::NOT_SET;
        }

        Aws::String GetNameForDeploymentReadyAction(DeploymentReadyAction enumValue)
        {
          switch(enumValue)
          {
          case DeploymentReadyAction::CONTINUE_DEPLOYMENT:
            return "CONTINUE_DEPLOYMENT";
          case DeploymentReadyAction::STOP_DEPLOYMENT:
            return "STOP_DEPLOYMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeploymentReadyActionMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
