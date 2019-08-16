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

#include <aws/robomaker/model/SimulationSoftwareSuiteType.h>
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
      namespace SimulationSoftwareSuiteTypeMapper
      {

        static const int Gazebo_HASH = HashingUtils::HashString("Gazebo");
        static const int RosbagPlay_HASH = HashingUtils::HashString("RosbagPlay");


        SimulationSoftwareSuiteType GetSimulationSoftwareSuiteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Gazebo_HASH)
          {
            return SimulationSoftwareSuiteType::Gazebo;
          }
          else if (hashCode == RosbagPlay_HASH)
          {
            return SimulationSoftwareSuiteType::RosbagPlay;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationSoftwareSuiteType>(hashCode);
          }

          return SimulationSoftwareSuiteType::NOT_SET;
        }

        Aws::String GetNameForSimulationSoftwareSuiteType(SimulationSoftwareSuiteType enumValue)
        {
          switch(enumValue)
          {
          case SimulationSoftwareSuiteType::Gazebo:
            return "Gazebo";
          case SimulationSoftwareSuiteType::RosbagPlay:
            return "RosbagPlay";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationSoftwareSuiteTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
