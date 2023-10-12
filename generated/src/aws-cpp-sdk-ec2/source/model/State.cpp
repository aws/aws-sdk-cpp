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

        static constexpr uint32_t PendingAcceptance_HASH = ConstExprHashingUtils::HashString("PendingAcceptance");
        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Rejected_HASH = ConstExprHashingUtils::HashString("Rejected");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Expired_HASH = ConstExprHashingUtils::HashString("Expired");


        State GetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case State::NOT_SET:
            return {};
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
