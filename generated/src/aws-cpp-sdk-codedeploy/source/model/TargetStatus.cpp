/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TargetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace TargetStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Skipped_HASH = ConstExprHashingUtils::HashString("Skipped");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");


        TargetStatus GetTargetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return TargetStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return TargetStatus::InProgress;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return TargetStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return TargetStatus::Failed;
          }
          else if (hashCode == Skipped_HASH)
          {
            return TargetStatus::Skipped;
          }
          else if (hashCode == Unknown_HASH)
          {
            return TargetStatus::Unknown;
          }
          else if (hashCode == Ready_HASH)
          {
            return TargetStatus::Ready;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStatus>(hashCode);
          }

          return TargetStatus::NOT_SET;
        }

        Aws::String GetNameForTargetStatus(TargetStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetStatus::NOT_SET:
            return {};
          case TargetStatus::Pending:
            return "Pending";
          case TargetStatus::InProgress:
            return "InProgress";
          case TargetStatus::Succeeded:
            return "Succeeded";
          case TargetStatus::Failed:
            return "Failed";
          case TargetStatus::Skipped:
            return "Skipped";
          case TargetStatus::Unknown:
            return "Unknown";
          case TargetStatus::Ready:
            return "Ready";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStatusMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
