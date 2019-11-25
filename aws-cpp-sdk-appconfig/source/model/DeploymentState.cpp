/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appconfig/model/DeploymentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace DeploymentStateMapper
      {

        static const int BAKING_HASH = HashingUtils::HashString("BAKING");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int DEPLOYING_HASH = HashingUtils::HashString("DEPLOYING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int ROLLING_BACK_HASH = HashingUtils::HashString("ROLLING_BACK");
        static const int ROLLED_BACK_HASH = HashingUtils::HashString("ROLLED_BACK");


        DeploymentState GetDeploymentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BAKING_HASH)
          {
            return DeploymentState::BAKING;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return DeploymentState::VALIDATING;
          }
          else if (hashCode == DEPLOYING_HASH)
          {
            return DeploymentState::DEPLOYING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return DeploymentState::COMPLETE;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return DeploymentState::ROLLING_BACK;
          }
          else if (hashCode == ROLLED_BACK_HASH)
          {
            return DeploymentState::ROLLED_BACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentState>(hashCode);
          }

          return DeploymentState::NOT_SET;
        }

        Aws::String GetNameForDeploymentState(DeploymentState enumValue)
        {
          switch(enumValue)
          {
          case DeploymentState::BAKING:
            return "BAKING";
          case DeploymentState::VALIDATING:
            return "VALIDATING";
          case DeploymentState::DEPLOYING:
            return "DEPLOYING";
          case DeploymentState::COMPLETE:
            return "COMPLETE";
          case DeploymentState::ROLLING_BACK:
            return "ROLLING_BACK";
          case DeploymentState::ROLLED_BACK:
            return "ROLLED_BACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStateMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
