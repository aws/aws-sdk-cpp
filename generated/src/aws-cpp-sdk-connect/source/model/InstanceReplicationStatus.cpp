/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceReplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace InstanceReplicationStatusMapper
      {

        static const int INSTANCE_REPLICATION_COMPLETE_HASH = HashingUtils::HashString("INSTANCE_REPLICATION_COMPLETE");
        static const int INSTANCE_REPLICATION_IN_PROGRESS_HASH = HashingUtils::HashString("INSTANCE_REPLICATION_IN_PROGRESS");
        static const int INSTANCE_REPLICATION_FAILED_HASH = HashingUtils::HashString("INSTANCE_REPLICATION_FAILED");
        static const int INSTANCE_REPLICA_DELETING_HASH = HashingUtils::HashString("INSTANCE_REPLICA_DELETING");
        static const int INSTANCE_REPLICATION_DELETION_FAILED_HASH = HashingUtils::HashString("INSTANCE_REPLICATION_DELETION_FAILED");
        static const int RESOURCE_REPLICATION_NOT_STARTED_HASH = HashingUtils::HashString("RESOURCE_REPLICATION_NOT_STARTED");


        InstanceReplicationStatus GetInstanceReplicationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_REPLICATION_COMPLETE_HASH)
          {
            return InstanceReplicationStatus::INSTANCE_REPLICATION_COMPLETE;
          }
          else if (hashCode == INSTANCE_REPLICATION_IN_PROGRESS_HASH)
          {
            return InstanceReplicationStatus::INSTANCE_REPLICATION_IN_PROGRESS;
          }
          else if (hashCode == INSTANCE_REPLICATION_FAILED_HASH)
          {
            return InstanceReplicationStatus::INSTANCE_REPLICATION_FAILED;
          }
          else if (hashCode == INSTANCE_REPLICA_DELETING_HASH)
          {
            return InstanceReplicationStatus::INSTANCE_REPLICA_DELETING;
          }
          else if (hashCode == INSTANCE_REPLICATION_DELETION_FAILED_HASH)
          {
            return InstanceReplicationStatus::INSTANCE_REPLICATION_DELETION_FAILED;
          }
          else if (hashCode == RESOURCE_REPLICATION_NOT_STARTED_HASH)
          {
            return InstanceReplicationStatus::RESOURCE_REPLICATION_NOT_STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceReplicationStatus>(hashCode);
          }

          return InstanceReplicationStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceReplicationStatus(InstanceReplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceReplicationStatus::NOT_SET:
            return {};
          case InstanceReplicationStatus::INSTANCE_REPLICATION_COMPLETE:
            return "INSTANCE_REPLICATION_COMPLETE";
          case InstanceReplicationStatus::INSTANCE_REPLICATION_IN_PROGRESS:
            return "INSTANCE_REPLICATION_IN_PROGRESS";
          case InstanceReplicationStatus::INSTANCE_REPLICATION_FAILED:
            return "INSTANCE_REPLICATION_FAILED";
          case InstanceReplicationStatus::INSTANCE_REPLICA_DELETING:
            return "INSTANCE_REPLICA_DELETING";
          case InstanceReplicationStatus::INSTANCE_REPLICATION_DELETION_FAILED:
            return "INSTANCE_REPLICATION_DELETION_FAILED";
          case InstanceReplicationStatus::RESOURCE_REPLICATION_NOT_STARTED:
            return "RESOURCE_REPLICATION_NOT_STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceReplicationStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
