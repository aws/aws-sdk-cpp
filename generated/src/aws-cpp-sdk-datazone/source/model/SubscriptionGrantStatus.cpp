/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionGrantStatus.h>
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
      namespace SubscriptionGrantStatusMapper
      {

        static constexpr uint32_t GRANT_PENDING_HASH = ConstExprHashingUtils::HashString("GRANT_PENDING");
        static constexpr uint32_t REVOKE_PENDING_HASH = ConstExprHashingUtils::HashString("REVOKE_PENDING");
        static constexpr uint32_t GRANT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("GRANT_IN_PROGRESS");
        static constexpr uint32_t REVOKE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("REVOKE_IN_PROGRESS");
        static constexpr uint32_t GRANTED_HASH = ConstExprHashingUtils::HashString("GRANTED");
        static constexpr uint32_t REVOKED_HASH = ConstExprHashingUtils::HashString("REVOKED");
        static constexpr uint32_t GRANT_FAILED_HASH = ConstExprHashingUtils::HashString("GRANT_FAILED");
        static constexpr uint32_t REVOKE_FAILED_HASH = ConstExprHashingUtils::HashString("REVOKE_FAILED");


        SubscriptionGrantStatus GetSubscriptionGrantStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRANT_PENDING_HASH)
          {
            return SubscriptionGrantStatus::GRANT_PENDING;
          }
          else if (hashCode == REVOKE_PENDING_HASH)
          {
            return SubscriptionGrantStatus::REVOKE_PENDING;
          }
          else if (hashCode == GRANT_IN_PROGRESS_HASH)
          {
            return SubscriptionGrantStatus::GRANT_IN_PROGRESS;
          }
          else if (hashCode == REVOKE_IN_PROGRESS_HASH)
          {
            return SubscriptionGrantStatus::REVOKE_IN_PROGRESS;
          }
          else if (hashCode == GRANTED_HASH)
          {
            return SubscriptionGrantStatus::GRANTED;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return SubscriptionGrantStatus::REVOKED;
          }
          else if (hashCode == GRANT_FAILED_HASH)
          {
            return SubscriptionGrantStatus::GRANT_FAILED;
          }
          else if (hashCode == REVOKE_FAILED_HASH)
          {
            return SubscriptionGrantStatus::REVOKE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionGrantStatus>(hashCode);
          }

          return SubscriptionGrantStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriptionGrantStatus(SubscriptionGrantStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionGrantStatus::NOT_SET:
            return {};
          case SubscriptionGrantStatus::GRANT_PENDING:
            return "GRANT_PENDING";
          case SubscriptionGrantStatus::REVOKE_PENDING:
            return "REVOKE_PENDING";
          case SubscriptionGrantStatus::GRANT_IN_PROGRESS:
            return "GRANT_IN_PROGRESS";
          case SubscriptionGrantStatus::REVOKE_IN_PROGRESS:
            return "REVOKE_IN_PROGRESS";
          case SubscriptionGrantStatus::GRANTED:
            return "GRANTED";
          case SubscriptionGrantStatus::REVOKED:
            return "REVOKED";
          case SubscriptionGrantStatus::GRANT_FAILED:
            return "GRANT_FAILED";
          case SubscriptionGrantStatus::REVOKE_FAILED:
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

      } // namespace SubscriptionGrantStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
