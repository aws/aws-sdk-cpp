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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Skipped_HASH = HashingUtils::HashString("Skipped");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");
        static const int Ready_HASH = HashingUtils::HashString("Ready");


        TargetStatus GetTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
