/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/EvidenceFinderEnablementStatus.h>
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
      namespace EvidenceFinderEnablementStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLE_IN_PROGRESS_HASH = HashingUtils::HashString("ENABLE_IN_PROGRESS");
        static const int DISABLE_IN_PROGRESS_HASH = HashingUtils::HashString("DISABLE_IN_PROGRESS");


        EvidenceFinderEnablementStatus GetEvidenceFinderEnablementStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EvidenceFinderEnablementStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EvidenceFinderEnablementStatus::DISABLED;
          }
          else if (hashCode == ENABLE_IN_PROGRESS_HASH)
          {
            return EvidenceFinderEnablementStatus::ENABLE_IN_PROGRESS;
          }
          else if (hashCode == DISABLE_IN_PROGRESS_HASH)
          {
            return EvidenceFinderEnablementStatus::DISABLE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvidenceFinderEnablementStatus>(hashCode);
          }

          return EvidenceFinderEnablementStatus::NOT_SET;
        }

        Aws::String GetNameForEvidenceFinderEnablementStatus(EvidenceFinderEnablementStatus enumValue)
        {
          switch(enumValue)
          {
          case EvidenceFinderEnablementStatus::ENABLED:
            return "ENABLED";
          case EvidenceFinderEnablementStatus::DISABLED:
            return "DISABLED";
          case EvidenceFinderEnablementStatus::ENABLE_IN_PROGRESS:
            return "ENABLE_IN_PROGRESS";
          case EvidenceFinderEnablementStatus::DISABLE_IN_PROGRESS:
            return "DISABLE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvidenceFinderEnablementStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
