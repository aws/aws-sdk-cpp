/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/IndexStatus.h>
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
      namespace IndexStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        IndexStatus GetIndexStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return IndexStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IndexStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IndexStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IndexStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexStatus>(hashCode);
          }

          return IndexStatus::NOT_SET;
        }

        Aws::String GetNameForIndexStatus(IndexStatus enumValue)
        {
          switch(enumValue)
          {
          case IndexStatus::NOT_SET:
            return {};
          case IndexStatus::PENDING:
            return "PENDING";
          case IndexStatus::ACTIVE:
            return "ACTIVE";
          case IndexStatus::FAILED:
            return "FAILED";
          case IndexStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
