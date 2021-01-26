/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/State.h>
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
      namespace StateMapper
      {

        static const int PendingAcceptance_HASH = HashingUtils::HashString("PendingAcceptance");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Expired_HASH = HashingUtils::HashString("Expired");


        State GetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingAcceptance_HASH)
          {
            return State::PendingAcceptance;
          }
          else if (hashCode == Pending_HASH)
          {
            return State::Pending;
          }
          else if (hashCode == Available_HASH)
          {
            return State::Available;
          }
          else if (hashCode == Deleting_HASH)
          {
            return State::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return State::Deleted;
          }
          else if (hashCode == Rejected_HASH)
          {
            return State::Rejected;
          }
          else if (hashCode == Failed_HASH)
          {
            return State::Failed;
          }
          else if (hashCode == Expired_HASH)
          {
            return State::Expired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<State>(hashCode);
          }

          return State::NOT_SET;
        }

        Aws::String GetNameForState(State enumValue)
        {
          switch(enumValue)
          {
          case State::PendingAcceptance:
            return "PendingAcceptance";
          case State::Pending:
            return "Pending";
          case State::Available:
            return "Available";
          case State::Deleting:
            return "Deleting";
          case State::Deleted:
            return "Deleted";
          case State::Rejected:
            return "Rejected";
          case State::Failed:
            return "Failed";
          case State::Expired:
            return "Expired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
