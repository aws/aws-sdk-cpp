/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantRole.h>
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
      namespace ParticipantRoleMapper
      {

        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int CUSTOM_BOT_HASH = HashingUtils::HashString("CUSTOM_BOT");
        static const int SUPERVISOR_HASH = HashingUtils::HashString("SUPERVISOR");


        ParticipantRole GetParticipantRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_HASH)
          {
            return ParticipantRole::AGENT;
          }
          else if (hashCode == CUSTOMER_HASH)
          {
            return ParticipantRole::CUSTOMER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return ParticipantRole::SYSTEM;
          }
          else if (hashCode == CUSTOM_BOT_HASH)
          {
            return ParticipantRole::CUSTOM_BOT;
          }
          else if (hashCode == SUPERVISOR_HASH)
          {
            return ParticipantRole::SUPERVISOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantRole>(hashCode);
          }

          return ParticipantRole::NOT_SET;
        }

        Aws::String GetNameForParticipantRole(ParticipantRole enumValue)
        {
          switch(enumValue)
          {
          case ParticipantRole::NOT_SET:
            return {};
          case ParticipantRole::AGENT:
            return "AGENT";
          case ParticipantRole::CUSTOMER:
            return "CUSTOMER";
          case ParticipantRole::SYSTEM:
            return "SYSTEM";
          case ParticipantRole::CUSTOM_BOT:
            return "CUSTOM_BOT";
          case ParticipantRole::SUPERVISOR:
            return "SUPERVISOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantRoleMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
