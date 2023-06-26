/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorRuleAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TrafficMirrorRuleActionMapper
      {

        static const int accept_HASH = HashingUtils::HashString("accept");
        static const int reject_HASH = HashingUtils::HashString("reject");


        TrafficMirrorRuleAction GetTrafficMirrorRuleActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == accept_HASH)
          {
            return TrafficMirrorRuleAction::accept;
          }
          else if (hashCode == reject_HASH)
          {
            return TrafficMirrorRuleAction::reject;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficMirrorRuleAction>(hashCode);
          }

          return TrafficMirrorRuleAction::NOT_SET;
        }

        Aws::String GetNameForTrafficMirrorRuleAction(TrafficMirrorRuleAction enumValue)
        {
          switch(enumValue)
          {
          case TrafficMirrorRuleAction::accept:
            return "accept";
          case TrafficMirrorRuleAction::reject:
            return "reject";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficMirrorRuleActionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
