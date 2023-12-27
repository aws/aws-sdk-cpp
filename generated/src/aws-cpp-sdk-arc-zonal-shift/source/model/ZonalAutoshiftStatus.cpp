/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
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
      namespace ZonalAutoshiftStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ZonalAutoshiftStatus GetZonalAutoshiftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ZonalAutoshiftStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ZonalAutoshiftStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZonalAutoshiftStatus>(hashCode);
          }

          return ZonalAutoshiftStatus::NOT_SET;
        }

        Aws::String GetNameForZonalAutoshiftStatus(ZonalAutoshiftStatus enumValue)
        {
          switch(enumValue)
          {
          case ZonalAutoshiftStatus::NOT_SET:
            return {};
          case ZonalAutoshiftStatus::ENABLED:
            return "ENABLED";
          case ZonalAutoshiftStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ZonalAutoshiftStatusMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
