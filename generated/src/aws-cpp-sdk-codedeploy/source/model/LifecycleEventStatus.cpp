﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/LifecycleEventStatus.h>
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
      namespace LifecycleEventStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Skipped_HASH = HashingUtils::HashString("Skipped");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        LifecycleEventStatus GetLifecycleEventStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return LifecycleEventStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return LifecycleEventStatus::InProgress;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return LifecycleEventStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return LifecycleEventStatus::Failed;
          }
          else if (hashCode == Skipped_HASH)
          {
            return LifecycleEventStatus::Skipped;
          }
          else if (hashCode == Unknown_HASH)
          {
            return LifecycleEventStatus::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleEventStatus>(hashCode);
          }

          return LifecycleEventStatus::NOT_SET;
        }

        Aws::String GetNameForLifecycleEventStatus(LifecycleEventStatus enumValue)
        {
          switch(enumValue)
          {
          case LifecycleEventStatus::NOT_SET:
            return {};
          case LifecycleEventStatus::Pending:
            return "Pending";
          case LifecycleEventStatus::InProgress:
            return "InProgress";
          case LifecycleEventStatus::Succeeded:
            return "Succeeded";
          case LifecycleEventStatus::Failed:
            return "Failed";
          case LifecycleEventStatus::Skipped:
            return "Skipped";
          case LifecycleEventStatus::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleEventStatusMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
