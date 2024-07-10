/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderSource.h>
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
      namespace SubscriptionProviderSourceMapper
      {

        static const int RedHat_HASH = HashingUtils::HashString("RedHat");


        SubscriptionProviderSource GetSubscriptionProviderSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RedHat_HASH)
          {
            return SubscriptionProviderSource::RedHat;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionProviderSource>(hashCode);
          }

          return SubscriptionProviderSource::NOT_SET;
        }

        Aws::String GetNameForSubscriptionProviderSource(SubscriptionProviderSource enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionProviderSource::NOT_SET:
            return {};
          case SubscriptionProviderSource::RedHat:
            return "RedHat";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionProviderSourceMapper
    } // namespace Model
  } // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
