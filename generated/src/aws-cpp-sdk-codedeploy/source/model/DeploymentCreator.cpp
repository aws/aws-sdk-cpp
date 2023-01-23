/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentCreator.h>
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
      namespace DeploymentCreatorMapper
      {

        static const int user_HASH = HashingUtils::HashString("user");
        static const int autoscaling_HASH = HashingUtils::HashString("autoscaling");
        static const int codeDeployRollback_HASH = HashingUtils::HashString("codeDeployRollback");
        static const int CodeDeploy_HASH = HashingUtils::HashString("CodeDeploy");
        static const int CodeDeployAutoUpdate_HASH = HashingUtils::HashString("CodeDeployAutoUpdate");
        static const int CloudFormation_HASH = HashingUtils::HashString("CloudFormation");
        static const int CloudFormationRollback_HASH = HashingUtils::HashString("CloudFormationRollback");


        DeploymentCreator GetDeploymentCreatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == user_HASH)
          {
            return DeploymentCreator::user;
          }
          else if (hashCode == autoscaling_HASH)
          {
            return DeploymentCreator::autoscaling;
          }
          else if (hashCode == codeDeployRollback_HASH)
          {
            return DeploymentCreator::codeDeployRollback;
          }
          else if (hashCode == CodeDeploy_HASH)
          {
            return DeploymentCreator::CodeDeploy;
          }
          else if (hashCode == CodeDeployAutoUpdate_HASH)
          {
            return DeploymentCreator::CodeDeployAutoUpdate;
          }
          else if (hashCode == CloudFormation_HASH)
          {
            return DeploymentCreator::CloudFormation;
          }
          else if (hashCode == CloudFormationRollback_HASH)
          {
            return DeploymentCreator::CloudFormationRollback;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentCreator>(hashCode);
          }

          return DeploymentCreator::NOT_SET;
        }

        Aws::String GetNameForDeploymentCreator(DeploymentCreator enumValue)
        {
          switch(enumValue)
          {
          case DeploymentCreator::user:
            return "user";
          case DeploymentCreator::autoscaling:
            return "autoscaling";
          case DeploymentCreator::codeDeployRollback:
            return "codeDeployRollback";
          case DeploymentCreator::CodeDeploy:
            return "CodeDeploy";
          case DeploymentCreator::CodeDeployAutoUpdate:
            return "CodeDeployAutoUpdate";
          case DeploymentCreator::CloudFormation:
            return "CloudFormation";
          case DeploymentCreator::CloudFormationRollback:
            return "CloudFormationRollback";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentCreatorMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
