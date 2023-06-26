/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditCheckRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuditCheckRunStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int WAITING_FOR_DATA_COLLECTION_HASH = HashingUtils::HashString("WAITING_FOR_DATA_COLLECTION");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int COMPLETED_COMPLIANT_HASH = HashingUtils::HashString("COMPLETED_COMPLIANT");
        static const int COMPLETED_NON_COMPLIANT_HASH = HashingUtils::HashString("COMPLETED_NON_COMPLIANT");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AuditCheckRunStatus GetAuditCheckRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AuditCheckRunStatus::IN_PROGRESS;
          }
          else if (hashCode == WAITING_FOR_DATA_COLLECTION_HASH)
          {
            return AuditCheckRunStatus::WAITING_FOR_DATA_COLLECTION;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AuditCheckRunStatus::CANCELED;
          }
          else if (hashCode == COMPLETED_COMPLIANT_HASH)
          {
            return AuditCheckRunStatus::COMPLETED_COMPLIANT;
          }
          else if (hashCode == COMPLETED_NON_COMPLIANT_HASH)
          {
            return AuditCheckRunStatus::COMPLETED_NON_COMPLIANT;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditCheckRunStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditCheckRunStatus>(hashCode);
          }

          return AuditCheckRunStatus::NOT_SET;
        }

        Aws::String GetNameForAuditCheckRunStatus(AuditCheckRunStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditCheckRunStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AuditCheckRunStatus::WAITING_FOR_DATA_COLLECTION:
            return "WAITING_FOR_DATA_COLLECTION";
          case AuditCheckRunStatus::CANCELED:
            return "CANCELED";
          case AuditCheckRunStatus::COMPLETED_COMPLIANT:
            return "COMPLETED_COMPLIANT";
          case AuditCheckRunStatus::COMPLETED_NON_COMPLIANT:
            return "COMPLETED_NON_COMPLIANT";
          case AuditCheckRunStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditCheckRunStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
