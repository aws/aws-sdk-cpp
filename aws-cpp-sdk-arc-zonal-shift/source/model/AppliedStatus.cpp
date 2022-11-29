/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/AppliedStatus.h>
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
      namespace AppliedStatusMapper
      {

        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");
        static const int NOT_APPLIED_HASH = HashingUtils::HashString("NOT_APPLIED");


        AppliedStatus GetAppliedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLIED_HASH)
          {
            return AppliedStatus::APPLIED;
          }
          else if (hashCode == NOT_APPLIED_HASH)
          {
            return AppliedStatus::NOT_APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppliedStatus>(hashCode);
          }

          return AppliedStatus::NOT_SET;
        }

        Aws::String GetNameForAppliedStatus(AppliedStatus enumValue)
        {
          switch(enumValue)
          {
          case AppliedStatus::APPLIED:
            return "APPLIED";
          case AppliedStatus::NOT_APPLIED:
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

      } // namespace AppliedStatusMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
