/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/EvidenceFinderBackfillStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace EvidenceFinderBackfillStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        EvidenceFinderBackfillStatus GetEvidenceFinderBackfillStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return EvidenceFinderBackfillStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return EvidenceFinderBackfillStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return EvidenceFinderBackfillStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvidenceFinderBackfillStatus>(hashCode);
          }

          return EvidenceFinderBackfillStatus::NOT_SET;
        }

        Aws::String GetNameForEvidenceFinderBackfillStatus(EvidenceFinderBackfillStatus enumValue)
        {
          switch(enumValue)
          {
          case EvidenceFinderBackfillStatus::NOT_STARTED:
            return "NOT_STARTED";
          case EvidenceFinderBackfillStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case EvidenceFinderBackfillStatus::COMPLETED:
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

      } // namespace EvidenceFinderBackfillStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
