/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DevEnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace DevEnvironmentStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        DevEnvironmentStatus GetDevEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DevEnvironmentStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return DevEnvironmentStatus::RUNNING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DevEnvironmentStatus::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return DevEnvironmentStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DevEnvironmentStatus::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DevEnvironmentStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DevEnvironmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DevEnvironmentStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DevEnvironmentStatus>(hashCode);
          }

          return DevEnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForDevEnvironmentStatus(DevEnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case DevEnvironmentStatus::PENDING:
            return "PENDING";
          case DevEnvironmentStatus::RUNNING:
            return "RUNNING";
          case DevEnvironmentStatus::STARTING:
            return "STARTING";
          case DevEnvironmentStatus::STOPPING:
            return "STOPPING";
          case DevEnvironmentStatus::STOPPED:
            return "STOPPED";
          case DevEnvironmentStatus::FAILED:
            return "FAILED";
          case DevEnvironmentStatus::DELETING:
            return "DELETING";
          case DevEnvironmentStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DevEnvironmentStatusMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
