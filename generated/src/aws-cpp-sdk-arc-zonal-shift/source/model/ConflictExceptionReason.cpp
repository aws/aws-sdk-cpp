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
        static const int PracticeConfigurationAlreadyExists_HASH = HashingUtils::HashString("PracticeConfigurationAlreadyExists");
        static const int AutoShiftEnabled_HASH = HashingUtils::HashString("AutoShiftEnabled");
        static const int PracticeConfigurationDoesNotExist_HASH = HashingUtils::HashString("PracticeConfigurationDoesNotExist");
        static const int ZonalAutoshiftActive_HASH = HashingUtils::HashString("ZonalAutoshiftActive");
        static const int PracticeOutcomeAlarmsRed_HASH = HashingUtils::HashString("PracticeOutcomeAlarmsRed");
        static const int PracticeBlockingAlarmsRed_HASH = HashingUtils::HashString("PracticeBlockingAlarmsRed");
        static const int PracticeInBlockedDates_HASH = HashingUtils::HashString("PracticeInBlockedDates");
        static const int PracticeInBlockedWindows_HASH = HashingUtils::HashString("PracticeInBlockedWindows");
        static const int PracticeOutsideAllowedWindows_HASH = HashingUtils::HashString("PracticeOutsideAllowedWindows");


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
          else if (hashCode == PracticeConfigurationAlreadyExists_HASH)
          {
            return ConflictExceptionReason::PracticeConfigurationAlreadyExists;
          }
          else if (hashCode == AutoShiftEnabled_HASH)
          {
            return ConflictExceptionReason::AutoShiftEnabled;
          }
          else if (hashCode == PracticeConfigurationDoesNotExist_HASH)
          {
            return ConflictExceptionReason::PracticeConfigurationDoesNotExist;
          }
          else if (hashCode == ZonalAutoshiftActive_HASH)
          {
            return ConflictExceptionReason::ZonalAutoshiftActive;
          }
          else if (hashCode == PracticeOutcomeAlarmsRed_HASH)
          {
            return ConflictExceptionReason::PracticeOutcomeAlarmsRed;
          }
          else if (hashCode == PracticeBlockingAlarmsRed_HASH)
          {
            return ConflictExceptionReason::PracticeBlockingAlarmsRed;
          }
          else if (hashCode == PracticeInBlockedDates_HASH)
          {
            return ConflictExceptionReason::PracticeInBlockedDates;
          }
          else if (hashCode == PracticeInBlockedWindows_HASH)
          {
            return ConflictExceptionReason::PracticeInBlockedWindows;
          }
          else if (hashCode == PracticeOutsideAllowedWindows_HASH)
          {
            return ConflictExceptionReason::PracticeOutsideAllowedWindows;
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
          case ConflictExceptionReason::NOT_SET:
            return {};
          case ConflictExceptionReason::ZonalShiftAlreadyExists:
            return "ZonalShiftAlreadyExists";
          case ConflictExceptionReason::ZonalShiftStatusNotActive:
            return "ZonalShiftStatusNotActive";
          case ConflictExceptionReason::SimultaneousZonalShiftsConflict:
            return "SimultaneousZonalShiftsConflict";
          case ConflictExceptionReason::PracticeConfigurationAlreadyExists:
            return "PracticeConfigurationAlreadyExists";
          case ConflictExceptionReason::AutoShiftEnabled:
            return "AutoShiftEnabled";
          case ConflictExceptionReason::PracticeConfigurationDoesNotExist:
            return "PracticeConfigurationDoesNotExist";
          case ConflictExceptionReason::ZonalAutoshiftActive:
            return "ZonalAutoshiftActive";
          case ConflictExceptionReason::PracticeOutcomeAlarmsRed:
            return "PracticeOutcomeAlarmsRed";
          case ConflictExceptionReason::PracticeBlockingAlarmsRed:
            return "PracticeBlockingAlarmsRed";
          case ConflictExceptionReason::PracticeInBlockedDates:
            return "PracticeInBlockedDates";
          case ConflictExceptionReason::PracticeInBlockedWindows:
            return "PracticeInBlockedWindows";
          case ConflictExceptionReason::PracticeOutsideAllowedWindows:
            return "PracticeOutsideAllowedWindows";
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
