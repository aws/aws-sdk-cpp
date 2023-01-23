/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace ShareStatusMapper
      {

        static const int Shared_HASH = HashingUtils::HashString("Shared");
        static const int PendingAcceptance_HASH = HashingUtils::HashString("PendingAcceptance");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int Rejecting_HASH = HashingUtils::HashString("Rejecting");
        static const int RejectFailed_HASH = HashingUtils::HashString("RejectFailed");
        static const int Sharing_HASH = HashingUtils::HashString("Sharing");
        static const int ShareFailed_HASH = HashingUtils::HashString("ShareFailed");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Shared_HASH)
          {
            return ShareStatus::Shared;
          }
          else if (hashCode == PendingAcceptance_HASH)
          {
            return ShareStatus::PendingAcceptance;
          }
          else if (hashCode == Rejected_HASH)
          {
            return ShareStatus::Rejected;
          }
          else if (hashCode == Rejecting_HASH)
          {
            return ShareStatus::Rejecting;
          }
          else if (hashCode == RejectFailed_HASH)
          {
            return ShareStatus::RejectFailed;
          }
          else if (hashCode == Sharing_HASH)
          {
            return ShareStatus::Sharing;
          }
          else if (hashCode == ShareFailed_HASH)
          {
            return ShareStatus::ShareFailed;
          }
          else if (hashCode == Deleted_HASH)
          {
            return ShareStatus::Deleted;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ShareStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatus>(hashCode);
          }

          return ShareStatus::NOT_SET;
        }

        Aws::String GetNameForShareStatus(ShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareStatus::Shared:
            return "Shared";
          case ShareStatus::PendingAcceptance:
            return "PendingAcceptance";
          case ShareStatus::Rejected:
            return "Rejected";
          case ShareStatus::Rejecting:
            return "Rejecting";
          case ShareStatus::RejectFailed:
            return "RejectFailed";
          case ShareStatus::Sharing:
            return "Sharing";
          case ShareStatus::ShareFailed:
            return "ShareFailed";
          case ShareStatus::Deleted:
            return "Deleted";
          case ShareStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
