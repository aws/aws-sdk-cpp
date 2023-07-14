/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditTaskStatus.h>
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
      namespace AuditTaskStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        AuditTaskStatus GetAuditTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AuditTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AuditTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditTaskStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AuditTaskStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditTaskStatus>(hashCode);
          }

          return AuditTaskStatus::NOT_SET;
        }

        Aws::String GetNameForAuditTaskStatus(AuditTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AuditTaskStatus::COMPLETED:
            return "COMPLETED";
          case AuditTaskStatus::FAILED:
            return "FAILED";
          case AuditTaskStatus::CANCELED:
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

      } // namespace AuditTaskStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
