/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentTargetType.h>
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
      namespace DeploymentTargetTypeMapper
      {

        static constexpr uint32_t InstanceTarget_HASH = ConstExprHashingUtils::HashString("InstanceTarget");
        static constexpr uint32_t LambdaTarget_HASH = ConstExprHashingUtils::HashString("LambdaTarget");
        static constexpr uint32_t ECSTarget_HASH = ConstExprHashingUtils::HashString("ECSTarget");
        static constexpr uint32_t CloudFormationTarget_HASH = ConstExprHashingUtils::HashString("CloudFormationTarget");


        DeploymentTargetType GetDeploymentTargetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceTarget_HASH)
          {
            return DeploymentTargetType::InstanceTarget;
          }
          else if (hashCode == LambdaTarget_HASH)
          {
            return DeploymentTargetType::LambdaTarget;
          }
          else if (hashCode == ECSTarget_HASH)
          {
            return DeploymentTargetType::ECSTarget;
          }
          else if (hashCode == CloudFormationTarget_HASH)
          {
            return DeploymentTargetType::CloudFormationTarget;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentTargetType>(hashCode);
          }

          return DeploymentTargetType::NOT_SET;
        }

        Aws::String GetNameForDeploymentTargetType(DeploymentTargetType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentTargetType::NOT_SET:
            return {};
          case DeploymentTargetType::InstanceTarget:
            return "InstanceTarget";
          case DeploymentTargetType::LambdaTarget:
            return "LambdaTarget";
          case DeploymentTargetType::ECSTarget:
            return "ECSTarget";
          case DeploymentTargetType::CloudFormationTarget:
            return "CloudFormationTarget";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentTargetTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
