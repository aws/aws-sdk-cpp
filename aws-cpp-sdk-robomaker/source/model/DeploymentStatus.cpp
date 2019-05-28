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

#include <aws/robomaker/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace DeploymentStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Preparing_HASH = HashingUtils::HashString("Preparing");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Canceled_HASH = HashingUtils::HashString("Canceled");


        DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return DeploymentStatus::Pending;
          }
          else if (hashCode == Preparing_HASH)
          {
            return DeploymentStatus::Preparing;
          }
          else if (hashCode == InProgress_HASH)
          {
            return DeploymentStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return DeploymentStatus::Failed;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return DeploymentStatus::Succeeded;
          }
          else if (hashCode == Canceled_HASH)
          {
            return DeploymentStatus::Canceled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentStatus>(hashCode);
          }

          return DeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForDeploymentStatus(DeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case DeploymentStatus::Pending:
            return "Pending";
          case DeploymentStatus::Preparing:
            return "Preparing";
          case DeploymentStatus::InProgress:
            return "InProgress";
          case DeploymentStatus::Failed:
            return "Failed";
          case DeploymentStatus::Succeeded:
            return "Succeeded";
          case DeploymentStatus::Canceled:
            return "Canceled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentStatusMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
