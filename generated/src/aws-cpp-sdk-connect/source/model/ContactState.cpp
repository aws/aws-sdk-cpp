/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactState.h>
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
      namespace ContactStateMapper
      {

        static constexpr uint32_t INCOMING_HASH = ConstExprHashingUtils::HashString("INCOMING");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t CONNECTING_HASH = ConstExprHashingUtils::HashString("CONNECTING");
        static constexpr uint32_t CONNECTED_HASH = ConstExprHashingUtils::HashString("CONNECTED");
        static constexpr uint32_t CONNECTED_ONHOLD_HASH = ConstExprHashingUtils::HashString("CONNECTED_ONHOLD");
        static constexpr uint32_t MISSED_HASH = ConstExprHashingUtils::HashString("MISSED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t ENDED_HASH = ConstExprHashingUtils::HashString("ENDED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");


        ContactState GetContactStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCOMING_HASH)
          {
            return ContactState::INCOMING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ContactState::PENDING;
          }
          else if (hashCode == CONNECTING_HASH)
          {
            return ContactState::CONNECTING;
          }
          else if (hashCode == CONNECTED_HASH)
          {
            return ContactState::CONNECTED;
          }
          else if (hashCode == CONNECTED_ONHOLD_HASH)
          {
            return ContactState::CONNECTED_ONHOLD;
          }
          else if (hashCode == MISSED_HASH)
          {
            return ContactState::MISSED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ContactState::ERROR_;
          }
          else if (hashCode == ENDED_HASH)
          {
            return ContactState::ENDED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ContactState::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactState>(hashCode);
          }

          return ContactState::NOT_SET;
        }

        Aws::String GetNameForContactState(ContactState enumValue)
        {
          switch(enumValue)
          {
          case ContactState::NOT_SET:
            return {};
          case ContactState::INCOMING:
            return "INCOMING";
          case ContactState::PENDING:
            return "PENDING";
          case ContactState::CONNECTING:
            return "CONNECTING";
          case ContactState::CONNECTED:
            return "CONNECTED";
          case ContactState::CONNECTED_ONHOLD:
            return "CONNECTED_ONHOLD";
          case ContactState::MISSED:
            return "MISSED";
          case ContactState::ERROR_:
            return "ERROR";
          case ContactState::ENDED:
            return "ENDED";
          case ContactState::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactStateMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
