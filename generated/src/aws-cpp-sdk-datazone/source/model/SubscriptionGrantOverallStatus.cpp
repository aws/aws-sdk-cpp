/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionGrantOverallStatus.h>
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
      namespace SubscriptionGrantOverallStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int GRANT_FAILED_HASH = HashingUtils::HashString("GRANT_FAILED");
        static const int REVOKE_FAILED_HASH = HashingUtils::HashString("REVOKE_FAILED");
        static const int GRANT_AND_REVOKE_FAILED_HASH = HashingUtils::HashString("GRANT_AND_REVOKE_FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int INACCESSIBLE_HASH = HashingUtils::HashString("INACCESSIBLE");


        SubscriptionGrantOverallStatus GetSubscriptionGrantOverallStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return SubscriptionGrantOverallStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return SubscriptionGrantOverallStatus::IN_PROGRESS;
          }
          else if (hashCode == GRANT_FAILED_HASH)
          {
            return SubscriptionGrantOverallStatus::GRANT_FAILED;
          }
          else if (hashCode == REVOKE_FAILED_HASH)
          {
            return SubscriptionGrantOverallStatus::REVOKE_FAILED;
          }
          else if (hashCode == GRANT_AND_REVOKE_FAILED_HASH)
          {
            return SubscriptionGrantOverallStatus::GRANT_AND_REVOKE_FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SubscriptionGrantOverallStatus::COMPLETED;
          }
          else if (hashCode == INACCESSIBLE_HASH)
          {
            return SubscriptionGrantOverallStatus::INACCESSIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionGrantOverallStatus>(hashCode);
          }

          return SubscriptionGrantOverallStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriptionGrantOverallStatus(SubscriptionGrantOverallStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionGrantOverallStatus::NOT_SET:
            return {};
          case SubscriptionGrantOverallStatus::PENDING:
            return "PENDING";
          case SubscriptionGrantOverallStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case SubscriptionGrantOverallStatus::GRANT_FAILED:
            return "GRANT_FAILED";
          case SubscriptionGrantOverallStatus::REVOKE_FAILED:
            return "REVOKE_FAILED";
          case SubscriptionGrantOverallStatus::GRANT_AND_REVOKE_FAILED:
            return "GRANT_AND_REVOKE_FAILED";
          case SubscriptionGrantOverallStatus::COMPLETED:
            return "COMPLETED";
          case SubscriptionGrantOverallStatus::INACCESSIBLE:
            return "INACCESSIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionGrantOverallStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
