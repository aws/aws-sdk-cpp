/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TimerEligibleParticipantRoles.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace TimerEligibleParticipantRolesMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int AGENT_HASH = HashingUtils::HashString("AGENT");


        TimerEligibleParticipantRoles GetTimerEligibleParticipantRolesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return TimerEligibleParticipantRoles::CUSTOMER;
          }
          else if (hashCode == AGENT_HASH)
          {
            return TimerEligibleParticipantRoles::AGENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimerEligibleParticipantRoles>(hashCode);
          }

          return TimerEligibleParticipantRoles::NOT_SET;
        }

        Aws::String GetNameForTimerEligibleParticipantRoles(TimerEligibleParticipantRoles enumValue)
        {
          switch(enumValue)
          {
          case TimerEligibleParticipantRoles::CUSTOMER:
            return "CUSTOMER";
          case TimerEligibleParticipantRoles::AGENT:
            return "AGENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimerEligibleParticipantRolesMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
