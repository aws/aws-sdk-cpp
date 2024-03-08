/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LifecycleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace LifecycleStateMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Pending_Wait_HASH = HashingUtils::HashString("Pending:Wait");
        static const int Pending_Proceed_HASH = HashingUtils::HashString("Pending:Proceed");
        static const int Quarantined_HASH = HashingUtils::HashString("Quarantined");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Terminating_HASH = HashingUtils::HashString("Terminating");
        static const int Terminating_Wait_HASH = HashingUtils::HashString("Terminating:Wait");
        static const int Terminating_Proceed_HASH = HashingUtils::HashString("Terminating:Proceed");
        static const int Terminated_HASH = HashingUtils::HashString("Terminated");
        static const int Detaching_HASH = HashingUtils::HashString("Detaching");
        static const int Detached_HASH = HashingUtils::HashString("Detached");
        static const int EnteringStandby_HASH = HashingUtils::HashString("EnteringStandby");
        static const int Standby_HASH = HashingUtils::HashString("Standby");
        static const int Warmed_Pending_HASH = HashingUtils::HashString("Warmed:Pending");
        static const int Warmed_Pending_Wait_HASH = HashingUtils::HashString("Warmed:Pending:Wait");
        static const int Warmed_Pending_Proceed_HASH = HashingUtils::HashString("Warmed:Pending:Proceed");
        static const int Warmed_Terminating_HASH = HashingUtils::HashString("Warmed:Terminating");
        static const int Warmed_Terminating_Wait_HASH = HashingUtils::HashString("Warmed:Terminating:Wait");
        static const int Warmed_Terminating_Proceed_HASH = HashingUtils::HashString("Warmed:Terminating:Proceed");
        static const int Warmed_Terminated_HASH = HashingUtils::HashString("Warmed:Terminated");
        static const int Warmed_Stopped_HASH = HashingUtils::HashString("Warmed:Stopped");
        static const int Warmed_Running_HASH = HashingUtils::HashString("Warmed:Running");
        static const int Warmed_Hibernated_HASH = HashingUtils::HashString("Warmed:Hibernated");


        LifecycleState GetLifecycleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return LifecycleState::Pending;
          }
          else if (hashCode == Pending_Wait_HASH)
          {
            return LifecycleState::Pending_Wait;
          }
          else if (hashCode == Pending_Proceed_HASH)
          {
            return LifecycleState::Pending_Proceed;
          }
          else if (hashCode == Quarantined_HASH)
          {
            return LifecycleState::Quarantined;
          }
          else if (hashCode == InService_HASH)
          {
            return LifecycleState::InService;
          }
          else if (hashCode == Terminating_HASH)
          {
            return LifecycleState::Terminating;
          }
          else if (hashCode == Terminating_Wait_HASH)
          {
            return LifecycleState::Terminating_Wait;
          }
          else if (hashCode == Terminating_Proceed_HASH)
          {
            return LifecycleState::Terminating_Proceed;
          }
          else if (hashCode == Terminated_HASH)
          {
            return LifecycleState::Terminated;
          }
          else if (hashCode == Detaching_HASH)
          {
            return LifecycleState::Detaching;
          }
          else if (hashCode == Detached_HASH)
          {
            return LifecycleState::Detached;
          }
          else if (hashCode == EnteringStandby_HASH)
          {
            return LifecycleState::EnteringStandby;
          }
          else if (hashCode == Standby_HASH)
          {
            return LifecycleState::Standby;
          }
          else if (hashCode == Warmed_Pending_HASH)
          {
            return LifecycleState::Warmed_Pending;
          }
          else if (hashCode == Warmed_Pending_Wait_HASH)
          {
            return LifecycleState::Warmed_Pending_Wait;
          }
          else if (hashCode == Warmed_Pending_Proceed_HASH)
          {
            return LifecycleState::Warmed_Pending_Proceed;
          }
          else if (hashCode == Warmed_Terminating_HASH)
          {
            return LifecycleState::Warmed_Terminating;
          }
          else if (hashCode == Warmed_Terminating_Wait_HASH)
          {
            return LifecycleState::Warmed_Terminating_Wait;
          }
          else if (hashCode == Warmed_Terminating_Proceed_HASH)
          {
            return LifecycleState::Warmed_Terminating_Proceed;
          }
          else if (hashCode == Warmed_Terminated_HASH)
          {
            return LifecycleState::Warmed_Terminated;
          }
          else if (hashCode == Warmed_Stopped_HASH)
          {
            return LifecycleState::Warmed_Stopped;
          }
          else if (hashCode == Warmed_Running_HASH)
          {
            return LifecycleState::Warmed_Running;
          }
          else if (hashCode == Warmed_Hibernated_HASH)
          {
            return LifecycleState::Warmed_Hibernated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleState>(hashCode);
          }

          return LifecycleState::NOT_SET;
        }

        Aws::String GetNameForLifecycleState(LifecycleState enumValue)
        {
          switch(enumValue)
          {
          case LifecycleState::NOT_SET:
            return {};
          case LifecycleState::Pending:
            return "Pending";
          case LifecycleState::Pending_Wait:
            return "Pending:Wait";
          case LifecycleState::Pending_Proceed:
            return "Pending:Proceed";
          case LifecycleState::Quarantined:
            return "Quarantined";
          case LifecycleState::InService:
            return "InService";
          case LifecycleState::Terminating:
            return "Terminating";
          case LifecycleState::Terminating_Wait:
            return "Terminating:Wait";
          case LifecycleState::Terminating_Proceed:
            return "Terminating:Proceed";
          case LifecycleState::Terminated:
            return "Terminated";
          case LifecycleState::Detaching:
            return "Detaching";
          case LifecycleState::Detached:
            return "Detached";
          case LifecycleState::EnteringStandby:
            return "EnteringStandby";
          case LifecycleState::Standby:
            return "Standby";
          case LifecycleState::Warmed_Pending:
            return "Warmed:Pending";
          case LifecycleState::Warmed_Pending_Wait:
            return "Warmed:Pending:Wait";
          case LifecycleState::Warmed_Pending_Proceed:
            return "Warmed:Pending:Proceed";
          case LifecycleState::Warmed_Terminating:
            return "Warmed:Terminating";
          case LifecycleState::Warmed_Terminating_Wait:
            return "Warmed:Terminating:Wait";
          case LifecycleState::Warmed_Terminating_Proceed:
            return "Warmed:Terminating:Proceed";
          case LifecycleState::Warmed_Terminated:
            return "Warmed:Terminated";
          case LifecycleState::Warmed_Stopped:
            return "Warmed:Stopped";
          case LifecycleState::Warmed_Running:
            return "Warmed:Running";
          case LifecycleState::Warmed_Hibernated:
            return "Warmed:Hibernated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleStateMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
