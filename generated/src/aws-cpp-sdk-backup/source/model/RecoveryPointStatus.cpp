/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace RecoveryPointStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");


        RecoveryPointStatus GetRecoveryPointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return RecoveryPointStatus::COMPLETED;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return RecoveryPointStatus::PARTIAL;
          }
          else if (hashCode == DELETING_HASH)
          {
            return RecoveryPointStatus::DELETING;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return RecoveryPointStatus::EXPIRED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return RecoveryPointStatus::AVAILABLE;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return RecoveryPointStatus::STOPPED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return RecoveryPointStatus::CREATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryPointStatus>(hashCode);
          }

          return RecoveryPointStatus::NOT_SET;
        }

        Aws::String GetNameForRecoveryPointStatus(RecoveryPointStatus enumValue)
        {
          switch(enumValue)
          {
          case RecoveryPointStatus::NOT_SET:
            return {};
          case RecoveryPointStatus::COMPLETED:
            return "COMPLETED";
          case RecoveryPointStatus::PARTIAL:
            return "PARTIAL";
          case RecoveryPointStatus::DELETING:
            return "DELETING";
          case RecoveryPointStatus::EXPIRED:
            return "EXPIRED";
          case RecoveryPointStatus::AVAILABLE:
            return "AVAILABLE";
          case RecoveryPointStatus::STOPPED:
            return "STOPPED";
          case RecoveryPointStatus::CREATING:
            return "CREATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryPointStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
