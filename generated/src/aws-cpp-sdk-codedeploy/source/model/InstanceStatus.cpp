/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/InstanceStatus.h>
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
      namespace InstanceStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Skipped_HASH = ConstExprHashingUtils::HashString("Skipped");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");


        InstanceStatus GetInstanceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return InstanceStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return InstanceStatus::InProgress;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return InstanceStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return InstanceStatus::Failed;
          }
          else if (hashCode == Skipped_HASH)
          {
            return InstanceStatus::Skipped;
          }
          else if (hashCode == Unknown_HASH)
          {
            return InstanceStatus::Unknown;
          }
          else if (hashCode == Ready_HASH)
          {
            return InstanceStatus::Ready;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStatus>(hashCode);
          }

          return InstanceStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceStatus(InstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceStatus::NOT_SET:
            return {};
          case InstanceStatus::Pending:
            return "Pending";
          case InstanceStatus::InProgress:
            return "InProgress";
          case InstanceStatus::Succeeded:
            return "Succeeded";
          case InstanceStatus::Failed:
            return "Failed";
          case InstanceStatus::Skipped:
            return "Skipped";
          case InstanceStatus::Unknown:
            return "Unknown";
          case InstanceStatus::Ready:
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

      } // namespace InstanceStatusMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
