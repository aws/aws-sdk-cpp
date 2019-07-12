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

#include <aws/robomaker/model/RobotSoftwareSuiteVersionType.h>
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
      namespace RobotSoftwareSuiteVersionTypeMapper
      {

        static const int Kinetic_HASH = HashingUtils::HashString("Kinetic");
        static const int Melodic_HASH = HashingUtils::HashString("Melodic");


        RobotSoftwareSuiteVersionType GetRobotSoftwareSuiteVersionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Kinetic_HASH)
          {
            return RobotSoftwareSuiteVersionType::Kinetic;
          }
          else if (hashCode == Melodic_HASH)
          {
            return RobotSoftwareSuiteVersionType::Melodic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RobotSoftwareSuiteVersionType>(hashCode);
          }

          return RobotSoftwareSuiteVersionType::NOT_SET;
        }

        Aws::String GetNameForRobotSoftwareSuiteVersionType(RobotSoftwareSuiteVersionType enumValue)
        {
          switch(enumValue)
          {
          case RobotSoftwareSuiteVersionType::Kinetic:
            return "Kinetic";
          case RobotSoftwareSuiteVersionType::Melodic:
            return "Melodic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RobotSoftwareSuiteVersionTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
