/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ConflictExceptionReason.h>
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
      namespace ConflictExceptionReasonMapper
      {

        static const int ZonalShiftAlreadyExists_HASH = HashingUtils::HashString("ZonalShiftAlreadyExists");
        static const int ZonalShiftStatusNotActive_HASH = HashingUtils::HashString("ZonalShiftStatusNotActive");
        static const int SimultaneousZonalShiftsConflict_HASH = HashingUtils::HashString("SimultaneousZonalShiftsConflict");


        ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZonalShiftAlreadyExists_HASH)
          {
            return ConflictExceptionReason::ZonalShiftAlreadyExists;
          }
          else if (hashCode == ZonalShiftStatusNotActive_HASH)
          {
            return ConflictExceptionReason::ZonalShiftStatusNotActive;
          }
          else if (hashCode == SimultaneousZonalShiftsConflict_HASH)
          {
            return ConflictExceptionReason::SimultaneousZonalShiftsConflict;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictExceptionReason>(hashCode);
          }

          return ConflictExceptionReason::NOT_SET;
        }

        Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ConflictExceptionReason::ZonalShiftAlreadyExists:
            return "ZonalShiftAlreadyExists";
          case ConflictExceptionReason::ZonalShiftStatusNotActive:
            return "ZonalShiftStatusNotActive";
          case ConflictExceptionReason::SimultaneousZonalShiftsConflict:
            return "SimultaneousZonalShiftsConflict";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictExceptionReasonMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
