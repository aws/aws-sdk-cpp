/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ParticipantRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ParticipantRoleMapper
      {

        static constexpr uint32_t AGENT_HASH = ConstExprHashingUtils::HashString("AGENT");
        static constexpr uint32_t CUSTOMER_HASH = ConstExprHashingUtils::HashString("CUSTOMER");
        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");
        static constexpr uint32_t CUSTOM_BOT_HASH = ConstExprHashingUtils::HashString("CUSTOM_BOT");


        ParticipantRole GetParticipantRoleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace ConnectParticipant
} // namespace Aws
