/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/IpSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace IpSetStatusMapper
      {

        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        IpSetStatus GetIpSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INACTIVE_HASH)
          {
            return IpSetStatus::INACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return IpSetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IpSetStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return IpSetStatus::DEACTIVATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return IpSetStatus::ERROR_;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return IpSetStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return IpSetStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpSetStatus>(hashCode);
          }

          return IpSetStatus::NOT_SET;
        }

        Aws::String GetNameForIpSetStatus(IpSetStatus enumValue)
        {
          switch(enumValue)
          {
          case IpSetStatus::INACTIVE:
            return "INACTIVE";
          case IpSetStatus::ACTIVATING:
            return "ACTIVATING";
          case IpSetStatus::ACTIVE:
            return "ACTIVE";
          case IpSetStatus::DEACTIVATING:
            return "DEACTIVATING";
          case IpSetStatus::ERROR_:
            return "ERROR";
          case IpSetStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case IpSetStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpSetStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
