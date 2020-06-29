/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
