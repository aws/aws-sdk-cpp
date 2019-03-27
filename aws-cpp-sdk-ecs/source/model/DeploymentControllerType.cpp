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

#include <aws/ecs/model/DeploymentControllerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace DeploymentControllerTypeMapper
      {

        static const int ECS_HASH = HashingUtils::HashString("ECS");
        static const int CODE_DEPLOY_HASH = HashingUtils::HashString("CODE_DEPLOY");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");


        DeploymentControllerType GetDeploymentControllerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECS_HASH)
          {
            return DeploymentControllerType::ECS;
          }
          else if (hashCode == CODE_DEPLOY_HASH)
          {
            return DeploymentControllerType::CODE_DEPLOY;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return DeploymentControllerType::EXTERNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentControllerType>(hashCode);
          }

          return DeploymentControllerType::NOT_SET;
        }

        Aws::String GetNameForDeploymentControllerType(DeploymentControllerType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentControllerType::ECS:
            return "ECS";
          case DeploymentControllerType::CODE_DEPLOY:
            return "CODE_DEPLOY";
          case DeploymentControllerType::EXTERNAL:
            return "EXTERNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentControllerTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
