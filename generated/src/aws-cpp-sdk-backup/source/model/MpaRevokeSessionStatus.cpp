/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/MpaRevokeSessionStatus.h>
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
      namespace MpaRevokeSessionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        MpaRevokeSessionStatus GetMpaRevokeSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MpaRevokeSessionStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MpaRevokeSessionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpaRevokeSessionStatus>(hashCode);
          }

          return MpaRevokeSessionStatus::NOT_SET;
        }

        Aws::String GetNameForMpaRevokeSessionStatus(MpaRevokeSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case MpaRevokeSessionStatus::NOT_SET:
            return {};
          case MpaRevokeSessionStatus::PENDING:
            return "PENDING";
          case MpaRevokeSessionStatus::FAILED:
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

      } // namespace MpaRevokeSessionStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
