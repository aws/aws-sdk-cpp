/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PolicyScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace PolicyScopeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        PolicyScope GetPolicyScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return PolicyScope::ACCOUNT;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return PolicyScope::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyScope>(hashCode);
          }

          return PolicyScope::NOT_SET;
        }

        Aws::String GetNameForPolicyScope(PolicyScope enumValue)
        {
          switch(enumValue)
          {
          case PolicyScope::NOT_SET:
            return {};
          case PolicyScope::ACCOUNT:
            return "ACCOUNT";
          case PolicyScope::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyScopeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
