/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ShiftType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCZonalShift
  {
    namespace Model
    {
      namespace ShiftTypeMapper
      {

        static const int ZONAL_SHIFT_HASH = HashingUtils::HashString("ZONAL_SHIFT");
        static const int PRACTICE_RUN_HASH = HashingUtils::HashString("PRACTICE_RUN");
        static const int FIS_EXPERIMENT_HASH = HashingUtils::HashString("FIS_EXPERIMENT");
        static const int ZONAL_AUTOSHIFT_HASH = HashingUtils::HashString("ZONAL_AUTOSHIFT");


        ShiftType GetShiftTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZONAL_SHIFT_HASH)
          {
            return ShiftType::ZONAL_SHIFT;
          }
          else if (hashCode == PRACTICE_RUN_HASH)
          {
            return ShiftType::PRACTICE_RUN;
          }
          else if (hashCode == FIS_EXPERIMENT_HASH)
          {
            return ShiftType::FIS_EXPERIMENT;
          }
          else if (hashCode == ZONAL_AUTOSHIFT_HASH)
          {
            return ShiftType::ZONAL_AUTOSHIFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShiftType>(hashCode);
          }

          return ShiftType::NOT_SET;
        }

        Aws::String GetNameForShiftType(ShiftType enumValue)
        {
          switch(enumValue)
          {
          case ShiftType::NOT_SET:
            return {};
          case ShiftType::ZONAL_SHIFT:
            return "ZONAL_SHIFT";
          case ShiftType::PRACTICE_RUN:
            return "PRACTICE_RUN";
          case ShiftType::FIS_EXPERIMENT:
            return "FIS_EXPERIMENT";
          case ShiftType::ZONAL_AUTOSHIFT:
            return "ZONAL_AUTOSHIFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShiftTypeMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
