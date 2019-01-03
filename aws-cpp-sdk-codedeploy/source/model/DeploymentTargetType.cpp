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

        static const int InstanceTarget_HASH = HashingUtils::HashString("InstanceTarget");
        static const int LambdaTarget_HASH = HashingUtils::HashString("LambdaTarget");
        static const int ECSTarget_HASH = HashingUtils::HashString("ECSTarget");


        DeploymentTargetType GetDeploymentTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case DeploymentTargetType::InstanceTarget:
            return "InstanceTarget";
          case DeploymentTargetType::LambdaTarget:
            return "LambdaTarget";
          case DeploymentTargetType::ECSTarget:
            return "ECSTarget";
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
