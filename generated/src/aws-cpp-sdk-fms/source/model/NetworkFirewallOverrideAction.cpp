/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallOverrideAction.h>
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
      namespace NetworkFirewallOverrideActionMapper
      {

        static const int DROP_TO_ALERT_HASH = HashingUtils::HashString("DROP_TO_ALERT");


        NetworkFirewallOverrideAction GetNetworkFirewallOverrideActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DROP_TO_ALERT_HASH)
          {
            return NetworkFirewallOverrideAction::DROP_TO_ALERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkFirewallOverrideAction>(hashCode);
          }

          return NetworkFirewallOverrideAction::NOT_SET;
        }

        Aws::String GetNameForNetworkFirewallOverrideAction(NetworkFirewallOverrideAction enumValue)
        {
          switch(enumValue)
          {
          case NetworkFirewallOverrideAction::DROP_TO_ALERT:
            return "DROP_TO_ALERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkFirewallOverrideActionMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
