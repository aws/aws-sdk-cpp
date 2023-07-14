/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentWaitType.h>
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
      namespace DeploymentWaitTypeMapper
      {

        static const int READY_WAIT_HASH = HashingUtils::HashString("READY_WAIT");
        static const int TERMINATION_WAIT_HASH = HashingUtils::HashString("TERMINATION_WAIT");


        DeploymentWaitType GetDeploymentWaitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_WAIT_HASH)
          {
            return DeploymentWaitType::READY_WAIT;
          }
          else if (hashCode == TERMINATION_WAIT_HASH)
          {
            return DeploymentWaitType::TERMINATION_WAIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentWaitType>(hashCode);
          }

          return DeploymentWaitType::NOT_SET;
        }

        Aws::String GetNameForDeploymentWaitType(DeploymentWaitType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentWaitType::READY_WAIT:
            return "READY_WAIT";
          case DeploymentWaitType::TERMINATION_WAIT:
            return "TERMINATION_WAIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentWaitTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
