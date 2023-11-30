/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/AutoshiftExecutionStatus.h>
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
      namespace AutoshiftExecutionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        AutoshiftExecutionStatus GetAutoshiftExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AutoshiftExecutionStatus::ACTIVE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AutoshiftExecutionStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoshiftExecutionStatus>(hashCode);
          }

          return AutoshiftExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForAutoshiftExecutionStatus(AutoshiftExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoshiftExecutionStatus::NOT_SET:
            return {};
          case AutoshiftExecutionStatus::ACTIVE:
            return "ACTIVE";
          case AutoshiftExecutionStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoshiftExecutionStatusMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
