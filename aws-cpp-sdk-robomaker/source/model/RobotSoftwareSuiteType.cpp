/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotSoftwareSuiteType.h>
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
      namespace RobotSoftwareSuiteTypeMapper
      {

        static const int ROS_HASH = HashingUtils::HashString("ROS");
        static const int ROS2_HASH = HashingUtils::HashString("ROS2");


        RobotSoftwareSuiteType GetRobotSoftwareSuiteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROS_HASH)
          {
            return RobotSoftwareSuiteType::ROS;
          }
          else if (hashCode == ROS2_HASH)
          {
            return RobotSoftwareSuiteType::ROS2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RobotSoftwareSuiteType>(hashCode);
          }

          return RobotSoftwareSuiteType::NOT_SET;
        }

        Aws::String GetNameForRobotSoftwareSuiteType(RobotSoftwareSuiteType enumValue)
        {
          switch(enumValue)
          {
          case RobotSoftwareSuiteType::ROS:
            return "ROS";
          case RobotSoftwareSuiteType::ROS2:
            return "ROS2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RobotSoftwareSuiteTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
