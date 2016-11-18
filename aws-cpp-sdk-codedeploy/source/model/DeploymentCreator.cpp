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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeploymentCreatorMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
