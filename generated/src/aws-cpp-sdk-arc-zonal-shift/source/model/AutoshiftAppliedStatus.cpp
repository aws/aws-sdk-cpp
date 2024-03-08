/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/AutoshiftAppliedStatus.h>
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
      namespace AutoshiftAppliedStatusMapper
      {

        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");
        static const int NOT_APPLIED_HASH = HashingUtils::HashString("NOT_APPLIED");


        AutoshiftAppliedStatus GetAutoshiftAppliedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLIED_HASH)
          {
            return AutoshiftAppliedStatus::APPLIED;
          }
          else if (hashCode == NOT_APPLIED_HASH)
          {
            return AutoshiftAppliedStatus::NOT_APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoshiftAppliedStatus>(hashCode);
          }

          return AutoshiftAppliedStatus::NOT_SET;
        }

        Aws::String GetNameForAutoshiftAppliedStatus(AutoshiftAppliedStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoshiftAppliedStatus::NOT_SET:
            return {};
          case AutoshiftAppliedStatus::APPLIED:
            return "APPLIED";
          case AutoshiftAppliedStatus::NOT_APPLIED:
            return "NOT_APPLIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoshiftAppliedStatusMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
