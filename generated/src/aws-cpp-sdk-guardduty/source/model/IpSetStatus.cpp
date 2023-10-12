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

        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DEACTIVATING_HASH = ConstExprHashingUtils::HashString("DEACTIVATING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t DELETE_PENDING_HASH = ConstExprHashingUtils::HashString("DELETE_PENDING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        IpSetStatus GetIpSetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case IpSetStatus::NOT_SET:
            return {};
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
