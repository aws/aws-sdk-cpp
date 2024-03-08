/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreDeletionStatus.h>
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
      namespace RestoreDeletionStatusMapper
      {

        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");


        RestoreDeletionStatus GetRestoreDeletionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETING_HASH)
          {
            return RestoreDeletionStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RestoreDeletionStatus::FAILED;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return RestoreDeletionStatus::SUCCESSFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreDeletionStatus>(hashCode);
          }

          return RestoreDeletionStatus::NOT_SET;
        }

        Aws::String GetNameForRestoreDeletionStatus(RestoreDeletionStatus enumValue)
        {
          switch(enumValue)
          {
          case RestoreDeletionStatus::NOT_SET:
            return {};
          case RestoreDeletionStatus::DELETING:
            return "DELETING";
          case RestoreDeletionStatus::FAILED:
            return "FAILED";
          case RestoreDeletionStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreDeletionStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
