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

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t WAITING_FOR_DATA_COLLECTION_HASH = ConstExprHashingUtils::HashString("WAITING_FOR_DATA_COLLECTION");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t COMPLETED_COMPLIANT_HASH = ConstExprHashingUtils::HashString("COMPLETED_COMPLIANT");
        static constexpr uint32_t COMPLETED_NON_COMPLIANT_HASH = ConstExprHashingUtils::HashString("COMPLETED_NON_COMPLIANT");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AuditCheckRunStatus GetAuditCheckRunStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AuditCheckRunStatus::NOT_SET:
            return {};
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
