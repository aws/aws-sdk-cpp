/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ZonalShiftStatus.h>
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
      namespace ZonalShiftStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        ZonalShiftStatus GetZonalShiftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ZonalShiftStatus::ACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ZonalShiftStatus::EXPIRED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return ZonalShiftStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZonalShiftStatus>(hashCode);
          }

          return ZonalShiftStatus::NOT_SET;
        }

        Aws::String GetNameForZonalShiftStatus(ZonalShiftStatus enumValue)
        {
          switch(enumValue)
          {
          case ZonalShiftStatus::ACTIVE:
            return "ACTIVE";
          case ZonalShiftStatus::EXPIRED:
            return "EXPIRED";
          case ZonalShiftStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ZonalShiftStatusMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
