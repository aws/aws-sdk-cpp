/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace StatefulActionMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int ALERT_HASH = HashingUtils::HashString("ALERT");


        StatefulAction GetStatefulActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return StatefulAction::PASS;
          }
          else if (hashCode == DROP_HASH)
          {
            return StatefulAction::DROP;
          }
          else if (hashCode == ALERT_HASH)
          {
            return StatefulAction::ALERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatefulAction>(hashCode);
          }

          return StatefulAction::NOT_SET;
        }

        Aws::String GetNameForStatefulAction(StatefulAction enumValue)
        {
          switch(enumValue)
          {
          case StatefulAction::PASS:
            return "PASS";
          case StatefulAction::DROP:
            return "DROP";
          case StatefulAction::ALERT:
            return "ALERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatefulActionMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
