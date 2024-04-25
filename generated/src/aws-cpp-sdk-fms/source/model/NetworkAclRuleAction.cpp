/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkAclRuleAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace NetworkAclRuleActionMapper
      {

        static const int allow_HASH = HashingUtils::HashString("allow");
        static const int deny_HASH = HashingUtils::HashString("deny");


        NetworkAclRuleAction GetNetworkAclRuleActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allow_HASH)
          {
            return NetworkAclRuleAction::allow;
          }
          else if (hashCode == deny_HASH)
          {
            return NetworkAclRuleAction::deny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkAclRuleAction>(hashCode);
          }

          return NetworkAclRuleAction::NOT_SET;
        }

        Aws::String GetNameForNetworkAclRuleAction(NetworkAclRuleAction enumValue)
        {
          switch(enumValue)
          {
          case NetworkAclRuleAction::NOT_SET:
            return {};
          case NetworkAclRuleAction::allow:
            return "allow";
          case NetworkAclRuleAction::deny:
            return "deny";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkAclRuleActionMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
