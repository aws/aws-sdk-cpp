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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Skipped_HASH = HashingUtils::HashString("Skipped");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");
        static const int Ready_HASH = HashingUtils::HashString("Ready");


        InstanceStatus GetInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
