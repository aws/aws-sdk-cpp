/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AngleUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace AngleUnitsMapper
      {

        static const int DEGREE_ANGLE_HASH = HashingUtils::HashString("DEGREE_ANGLE");
        static const int RADIAN_HASH = HashingUtils::HashString("RADIAN");


        AngleUnits GetAngleUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEGREE_ANGLE_HASH)
          {
            return AngleUnits::DEGREE_ANGLE;
          }
          else if (hashCode == RADIAN_HASH)
          {
            return AngleUnits::RADIAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AngleUnits>(hashCode);
          }

          return AngleUnits::NOT_SET;
        }

        Aws::String GetNameForAngleUnits(AngleUnits enumValue)
        {
          switch(enumValue)
          {
          case AngleUnits::DEGREE_ANGLE:
            return "DEGREE_ANGLE";
          case AngleUnits::RADIAN:
            return "RADIAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AngleUnitsMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
