/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ShareRequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ShareRequestStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int REPLICATING_HASH = HashingUtils::HashString("REPLICATING");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");
        static const int EXPIRING_HASH = HashingUtils::HashString("EXPIRING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int DECLINED_HASH = HashingUtils::HashString("DECLINED");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");


        ShareRequestStatus GetShareRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ShareRequestStatus::ACTIVE;
          }
          else if (hashCode == REPLICATING_HASH)
          {
            return ShareRequestStatus::REPLICATING;
          }
          else if (hashCode == SHARED_HASH)
          {
            return ShareRequestStatus::SHARED;
          }
          else if (hashCode == EXPIRING_HASH)
          {
            return ShareRequestStatus::EXPIRING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ShareRequestStatus::FAILED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ShareRequestStatus::EXPIRED;
          }
          else if (hashCode == DECLINED_HASH)
          {
            return ShareRequestStatus::DECLINED;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return ShareRequestStatus::REVOKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareRequestStatus>(hashCode);
          }

          return ShareRequestStatus::NOT_SET;
        }

        Aws::String GetNameForShareRequestStatus(ShareRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareRequestStatus::NOT_SET:
            return {};
          case ShareRequestStatus::ACTIVE:
            return "ACTIVE";
          case ShareRequestStatus::REPLICATING:
            return "REPLICATING";
          case ShareRequestStatus::SHARED:
            return "SHARED";
          case ShareRequestStatus::EXPIRING:
            return "EXPIRING";
          case ShareRequestStatus::FAILED:
            return "FAILED";
          case ShareRequestStatus::EXPIRED:
            return "EXPIRED";
          case ShareRequestStatus::DECLINED:
            return "DECLINED";
          case ShareRequestStatus::REVOKED:
            return "REVOKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareRequestStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
