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

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Pending_Wait_HASH = ConstExprHashingUtils::HashString("Pending:Wait");
        static constexpr uint32_t Pending_Proceed_HASH = ConstExprHashingUtils::HashString("Pending:Proceed");
        static constexpr uint32_t Quarantined_HASH = ConstExprHashingUtils::HashString("Quarantined");
        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Terminating_HASH = ConstExprHashingUtils::HashString("Terminating");
        static constexpr uint32_t Terminating_Wait_HASH = ConstExprHashingUtils::HashString("Terminating:Wait");
        static constexpr uint32_t Terminating_Proceed_HASH = ConstExprHashingUtils::HashString("Terminating:Proceed");
        static constexpr uint32_t Terminated_HASH = ConstExprHashingUtils::HashString("Terminated");
        static constexpr uint32_t Detaching_HASH = ConstExprHashingUtils::HashString("Detaching");
        static constexpr uint32_t Detached_HASH = ConstExprHashingUtils::HashString("Detached");
        static constexpr uint32_t EnteringStandby_HASH = ConstExprHashingUtils::HashString("EnteringStandby");
        static constexpr uint32_t Standby_HASH = ConstExprHashingUtils::HashString("Standby");
        static constexpr uint32_t Warmed_Pending_HASH = ConstExprHashingUtils::HashString("Warmed:Pending");
        static constexpr uint32_t Warmed_Pending_Wait_HASH = ConstExprHashingUtils::HashString("Warmed:Pending:Wait");
        static constexpr uint32_t Warmed_Pending_Proceed_HASH = ConstExprHashingUtils::HashString("Warmed:Pending:Proceed");
        static constexpr uint32_t Warmed_Terminating_HASH = ConstExprHashingUtils::HashString("Warmed:Terminating");
        static constexpr uint32_t Warmed_Terminating_Wait_HASH = ConstExprHashingUtils::HashString("Warmed:Terminating:Wait");
        static constexpr uint32_t Warmed_Terminating_Proceed_HASH = ConstExprHashingUtils::HashString("Warmed:Terminating:Proceed");
        static constexpr uint32_t Warmed_Terminated_HASH = ConstExprHashingUtils::HashString("Warmed:Terminated");
        static constexpr uint32_t Warmed_Stopped_HASH = ConstExprHashingUtils::HashString("Warmed:Stopped");
        static constexpr uint32_t Warmed_Running_HASH = ConstExprHashingUtils::HashString("Warmed:Running");
        static constexpr uint32_t Warmed_Hibernated_HASH = ConstExprHashingUtils::HashString("Warmed:Hibernated");


        LifecycleState GetLifecycleStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
