/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t ECS_HASH = ConstExprHashingUtils::HashString("ECS");
        static constexpr uint32_t CODE_DEPLOY_HASH = ConstExprHashingUtils::HashString("CODE_DEPLOY");
        static constexpr uint32_t EXTERNAL_HASH = ConstExprHashingUtils::HashString("EXTERNAL");


        DeploymentControllerType GetDeploymentControllerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DeploymentControllerType::NOT_SET:
            return {};
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
