/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotStatus.h>
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
      namespace RobotStatusMapper
      {

        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Registered_HASH = HashingUtils::HashString("Registered");
        static const int PendingNewDeployment_HASH = HashingUtils::HashString("PendingNewDeployment");
        static const int Deploying_HASH = HashingUtils::HashString("Deploying");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InSync_HASH = HashingUtils::HashString("InSync");
        static const int NoResponse_HASH = HashingUtils::HashString("NoResponse");


        RobotStatus GetRobotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Available_HASH)
          {
            return RobotStatus::Available;
          }
          else if (hashCode == Registered_HASH)
          {
            return RobotStatus::Registered;
          }
          else if (hashCode == PendingNewDeployment_HASH)
          {
            return RobotStatus::PendingNewDeployment;
          }
          else if (hashCode == Deploying_HASH)
          {
            return RobotStatus::Deploying;
          }
          else if (hashCode == Failed_HASH)
          {
            return RobotStatus::Failed;
          }
          else if (hashCode == InSync_HASH)
          {
            return RobotStatus::InSync;
          }
          else if (hashCode == NoResponse_HASH)
          {
            return RobotStatus::NoResponse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RobotStatus>(hashCode);
          }

          return RobotStatus::NOT_SET;
        }

        Aws::String GetNameForRobotStatus(RobotStatus enumValue)
        {
          switch(enumValue)
          {
          case RobotStatus::Available:
            return "Available";
          case RobotStatus::Registered:
            return "Registered";
          case RobotStatus::PendingNewDeployment:
            return "PendingNewDeployment";
          case RobotStatus::Deploying:
            return "Deploying";
          case RobotStatus::Failed:
            return "Failed";
          case RobotStatus::InSync:
            return "InSync";
          case RobotStatus::NoResponse:
            return "NoResponse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RobotStatusMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
