/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/MpaSessionStatus.h>
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
      namespace MpaSessionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        MpaSessionStatus GetMpaSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MpaSessionStatus::PENDING;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return MpaSessionStatus::APPROVED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MpaSessionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpaSessionStatus>(hashCode);
          }

          return MpaSessionStatus::NOT_SET;
        }

        Aws::String GetNameForMpaSessionStatus(MpaSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case MpaSessionStatus::NOT_SET:
            return {};
          case MpaSessionStatus::PENDING:
            return "PENDING";
          case MpaSessionStatus::APPROVED:
            return "APPROVED";
          case MpaSessionStatus::FAILED:
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

      } // namespace MpaSessionStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
