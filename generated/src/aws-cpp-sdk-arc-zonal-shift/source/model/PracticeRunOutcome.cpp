/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/PracticeRunOutcome.h>
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
      namespace PracticeRunOutcomeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        PracticeRunOutcome GetPracticeRunOutcomeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return PracticeRunOutcome::FAILED;
          }
          else if (hashCode == INTERRUPTED_HASH)
          {
            return PracticeRunOutcome::INTERRUPTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return PracticeRunOutcome::PENDING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return PracticeRunOutcome::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PracticeRunOutcome>(hashCode);
          }

          return PracticeRunOutcome::NOT_SET;
        }

        Aws::String GetNameForPracticeRunOutcome(PracticeRunOutcome enumValue)
        {
          switch(enumValue)
          {
          case PracticeRunOutcome::NOT_SET:
            return {};
          case PracticeRunOutcome::FAILED:
            return "FAILED";
          case PracticeRunOutcome::INTERRUPTED:
            return "INTERRUPTED";
          case PracticeRunOutcome::PENDING:
            return "PENDING";
          case PracticeRunOutcome::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PracticeRunOutcomeMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
