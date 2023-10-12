/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoverySnapshotsOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace RecoverySnapshotsOrderMapper
      {

        static constexpr uint32_t ASC_HASH = ConstExprHashingUtils::HashString("ASC");
        static constexpr uint32_t DESC_HASH = ConstExprHashingUtils::HashString("DESC");


        RecoverySnapshotsOrder GetRecoverySnapshotsOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return RecoverySnapshotsOrder::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return RecoverySnapshotsOrder::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoverySnapshotsOrder>(hashCode);
          }

          return RecoverySnapshotsOrder::NOT_SET;
        }

        Aws::String GetNameForRecoverySnapshotsOrder(RecoverySnapshotsOrder enumValue)
        {
          switch(enumValue)
          {
          case RecoverySnapshotsOrder::NOT_SET:
            return {};
          case RecoverySnapshotsOrder::ASC:
            return "ASC";
          case RecoverySnapshotsOrder::DESC:
            return "DESC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoverySnapshotsOrderMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
