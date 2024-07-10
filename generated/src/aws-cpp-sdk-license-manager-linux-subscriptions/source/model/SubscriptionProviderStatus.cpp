/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManagerLinuxSubscriptions
  {
    namespace Model
    {
      namespace SubscriptionProviderStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        SubscriptionProviderStatus GetSubscriptionProviderStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return SubscriptionProviderStatus::ACTIVE;
          }
          else if (hashCode == INVALID_HASH)
          {
            return SubscriptionProviderStatus::INVALID;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SubscriptionProviderStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionProviderStatus>(hashCode);
          }

          return SubscriptionProviderStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriptionProviderStatus(SubscriptionProviderStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionProviderStatus::NOT_SET:
            return {};
          case SubscriptionProviderStatus::ACTIVE:
            return "ACTIVE";
          case SubscriptionProviderStatus::INVALID:
            return "INVALID";
          case SubscriptionProviderStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionProviderStatusMapper
    } // namespace Model
  } // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
