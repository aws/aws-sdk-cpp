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

        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t PARTIAL_HASH = ConstExprHashingUtils::HashString("PARTIAL");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        RecoveryPointStatus GetRecoveryPointStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
