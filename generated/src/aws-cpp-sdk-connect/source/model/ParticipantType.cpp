/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantType.h>
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
      namespace ParticipantTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int MANAGER_HASH = HashingUtils::HashString("MANAGER");
        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int THIRDPARTY_HASH = HashingUtils::HashString("THIRDPARTY");


        ParticipantType GetParticipantTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ParticipantType::ALL;
          }
          else if (hashCode == MANAGER_HASH)
          {
            return ParticipantType::MANAGER;
          }
          else if (hashCode == AGENT_HASH)
          {
            return ParticipantType::AGENT;
          }
          else if (hashCode == CUSTOMER_HASH)
          {
            return ParticipantType::CUSTOMER;
          }
          else if (hashCode == THIRDPARTY_HASH)
          {
            return ParticipantType::THIRDPARTY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantType>(hashCode);
          }

          return ParticipantType::NOT_SET;
        }

        Aws::String GetNameForParticipantType(ParticipantType enumValue)
        {
          switch(enumValue)
          {
          case ParticipantType::NOT_SET:
            return {};
          case ParticipantType::ALL:
            return "ALL";
          case ParticipantType::MANAGER:
            return "MANAGER";
          case ParticipantType::AGENT:
            return "AGENT";
          case ParticipantType::CUSTOMER:
            return "CUSTOMER";
          case ParticipantType::THIRDPARTY:
            return "THIRDPARTY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
