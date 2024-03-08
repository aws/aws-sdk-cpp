/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreValidationStatus.h>
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
      namespace RestoreValidationStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");


        RestoreValidationStatus GetRestoreValidationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return RestoreValidationStatus::FAILED;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return RestoreValidationStatus::SUCCESSFUL;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return RestoreValidationStatus::TIMED_OUT;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return RestoreValidationStatus::VALIDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreValidationStatus>(hashCode);
          }

          return RestoreValidationStatus::NOT_SET;
        }

        Aws::String GetNameForRestoreValidationStatus(RestoreValidationStatus enumValue)
        {
          switch(enumValue)
          {
          case RestoreValidationStatus::NOT_SET:
            return {};
          case RestoreValidationStatus::FAILED:
            return "FAILED";
          case RestoreValidationStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case RestoreValidationStatus::TIMED_OUT:
            return "TIMED_OUT";
          case RestoreValidationStatus::VALIDATING:
            return "VALIDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreValidationStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
