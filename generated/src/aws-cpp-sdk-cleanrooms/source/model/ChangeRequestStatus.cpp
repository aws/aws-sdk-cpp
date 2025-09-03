/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChangeRequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ChangeRequestStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int DENIED_HASH = HashingUtils::HashString("DENIED");
        static const int COMMITTED_HASH = HashingUtils::HashString("COMMITTED");


        ChangeRequestStatus GetChangeRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ChangeRequestStatus::PENDING;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return ChangeRequestStatus::APPROVED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ChangeRequestStatus::CANCELLED;
          }
          else if (hashCode == DENIED_HASH)
          {
            return ChangeRequestStatus::DENIED;
          }
          else if (hashCode == COMMITTED_HASH)
          {
            return ChangeRequestStatus::COMMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeRequestStatus>(hashCode);
          }

          return ChangeRequestStatus::NOT_SET;
        }

        Aws::String GetNameForChangeRequestStatus(ChangeRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeRequestStatus::NOT_SET:
            return {};
          case ChangeRequestStatus::PENDING:
            return "PENDING";
          case ChangeRequestStatus::APPROVED:
            return "APPROVED";
          case ChangeRequestStatus::CANCELLED:
            return "CANCELLED";
          case ChangeRequestStatus::DENIED:
            return "DENIED";
          case ChangeRequestStatus::COMMITTED:
            return "COMMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeRequestStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
