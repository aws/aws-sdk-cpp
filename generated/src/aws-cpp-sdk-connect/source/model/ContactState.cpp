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

        static const int INCOMING_HASH = HashingUtils::HashString("INCOMING");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CONNECTING_HASH = HashingUtils::HashString("CONNECTING");
        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int CONNECTED_ONHOLD_HASH = HashingUtils::HashString("CONNECTED_ONHOLD");
        static const int MISSED_HASH = HashingUtils::HashString("MISSED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int ENDED_HASH = HashingUtils::HashString("ENDED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        ContactState GetContactStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
