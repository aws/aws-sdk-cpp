/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SelfGrantStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace SelfGrantStatusMapper
      {

        static const int GRANT_PENDING_HASH = HashingUtils::HashString("GRANT_PENDING");
        static const int REVOKE_PENDING_HASH = HashingUtils::HashString("REVOKE_PENDING");
        static const int GRANT_IN_PROGRESS_HASH = HashingUtils::HashString("GRANT_IN_PROGRESS");
        static const int REVOKE_IN_PROGRESS_HASH = HashingUtils::HashString("REVOKE_IN_PROGRESS");
        static const int GRANTED_HASH = HashingUtils::HashString("GRANTED");
        static const int GRANT_FAILED_HASH = HashingUtils::HashString("GRANT_FAILED");
        static const int REVOKE_FAILED_HASH = HashingUtils::HashString("REVOKE_FAILED");


        SelfGrantStatus GetSelfGrantStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRANT_PENDING_HASH)
          {
            return SelfGrantStatus::GRANT_PENDING;
          }
          else if (hashCode == REVOKE_PENDING_HASH)
          {
            return SelfGrantStatus::REVOKE_PENDING;
          }
          else if (hashCode == GRANT_IN_PROGRESS_HASH)
          {
            return SelfGrantStatus::GRANT_IN_PROGRESS;
          }
          else if (hashCode == REVOKE_IN_PROGRESS_HASH)
          {
            return SelfGrantStatus::REVOKE_IN_PROGRESS;
          }
          else if (hashCode == GRANTED_HASH)
          {
            return SelfGrantStatus::GRANTED;
          }
          else if (hashCode == GRANT_FAILED_HASH)
          {
            return SelfGrantStatus::GRANT_FAILED;
          }
          else if (hashCode == REVOKE_FAILED_HASH)
          {
            return SelfGrantStatus::REVOKE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelfGrantStatus>(hashCode);
          }

          return SelfGrantStatus::NOT_SET;
        }

        Aws::String GetNameForSelfGrantStatus(SelfGrantStatus enumValue)
        {
          switch(enumValue)
          {
          case SelfGrantStatus::NOT_SET:
            return {};
          case SelfGrantStatus::GRANT_PENDING:
            return "GRANT_PENDING";
          case SelfGrantStatus::REVOKE_PENDING:
            return "REVOKE_PENDING";
          case SelfGrantStatus::GRANT_IN_PROGRESS:
            return "GRANT_IN_PROGRESS";
          case SelfGrantStatus::REVOKE_IN_PROGRESS:
            return "REVOKE_IN_PROGRESS";
          case SelfGrantStatus::GRANTED:
            return "GRANTED";
          case SelfGrantStatus::GRANT_FAILED:
            return "GRANT_FAILED";
          case SelfGrantStatus::REVOKE_FAILED:
            return "REVOKE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelfGrantStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
