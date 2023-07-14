/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotDeploymentStep.h>
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
      namespace RobotDeploymentStepMapper
      {

        static const int Validating_HASH = HashingUtils::HashString("Validating");
        static const int DownloadingExtracting_HASH = HashingUtils::HashString("DownloadingExtracting");
        static const int ExecutingDownloadCondition_HASH = HashingUtils::HashString("ExecutingDownloadCondition");
        static const int ExecutingPreLaunch_HASH = HashingUtils::HashString("ExecutingPreLaunch");
        static const int Launching_HASH = HashingUtils::HashString("Launching");
        static const int ExecutingPostLaunch_HASH = HashingUtils::HashString("ExecutingPostLaunch");
        static const int Finished_HASH = HashingUtils::HashString("Finished");


        RobotDeploymentStep GetRobotDeploymentStepForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Validating_HASH)
          {
            return RobotDeploymentStep::Validating;
          }
          else if (hashCode == DownloadingExtracting_HASH)
          {
            return RobotDeploymentStep::DownloadingExtracting;
          }
          else if (hashCode == ExecutingDownloadCondition_HASH)
          {
            return RobotDeploymentStep::ExecutingDownloadCondition;
          }
          else if (hashCode == ExecutingPreLaunch_HASH)
          {
            return RobotDeploymentStep::ExecutingPreLaunch;
          }
          else if (hashCode == Launching_HASH)
          {
            return RobotDeploymentStep::Launching;
          }
          else if (hashCode == ExecutingPostLaunch_HASH)
          {
            return RobotDeploymentStep::ExecutingPostLaunch;
          }
          else if (hashCode == Finished_HASH)
          {
            return RobotDeploymentStep::Finished;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RobotDeploymentStep>(hashCode);
          }

          return RobotDeploymentStep::NOT_SET;
        }

        Aws::String GetNameForRobotDeploymentStep(RobotDeploymentStep enumValue)
        {
          switch(enumValue)
          {
          case RobotDeploymentStep::Validating:
            return "Validating";
          case RobotDeploymentStep::DownloadingExtracting:
            return "DownloadingExtracting";
          case RobotDeploymentStep::ExecutingDownloadCondition:
            return "ExecutingDownloadCondition";
          case RobotDeploymentStep::ExecutingPreLaunch:
            return "ExecutingPreLaunch";
          case RobotDeploymentStep::Launching:
            return "Launching";
          case RobotDeploymentStep::ExecutingPostLaunch:
            return "ExecutingPostLaunch";
          case RobotDeploymentStep::Finished:
            return "Finished";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RobotDeploymentStepMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
