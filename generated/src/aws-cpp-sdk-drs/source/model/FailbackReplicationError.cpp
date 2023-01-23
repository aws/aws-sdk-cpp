/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/FailbackReplicationError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace FailbackReplicationErrorMapper
      {

        static const int AGENT_NOT_SEEN_HASH = HashingUtils::HashString("AGENT_NOT_SEEN");
        static const int FAILBACK_CLIENT_NOT_SEEN_HASH = HashingUtils::HashString("FAILBACK_CLIENT_NOT_SEEN");
        static const int NOT_CONVERGING_HASH = HashingUtils::HashString("NOT_CONVERGING");
        static const int UNSTABLE_NETWORK_HASH = HashingUtils::HashString("UNSTABLE_NETWORK");
        static const int FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION_HASH = HashingUtils::HashString("FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION");
        static const int FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT_HASH = HashingUtils::HashString("FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT");
        static const int FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE");
        static const int FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE");
        static const int FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION_HASH = HashingUtils::HashString("FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION");
        static const int FAILED_GETTING_REPLICATION_STATE_HASH = HashingUtils::HashString("FAILED_GETTING_REPLICATION_STATE");
        static const int SNAPSHOTS_FAILURE_HASH = HashingUtils::HashString("SNAPSHOTS_FAILURE");
        static const int FAILED_TO_CREATE_SECURITY_GROUP_HASH = HashingUtils::HashString("FAILED_TO_CREATE_SECURITY_GROUP");
        static const int FAILED_TO_LAUNCH_REPLICATION_SERVER_HASH = HashingUtils::HashString("FAILED_TO_LAUNCH_REPLICATION_SERVER");
        static const int FAILED_TO_BOOT_REPLICATION_SERVER_HASH = HashingUtils::HashString("FAILED_TO_BOOT_REPLICATION_SERVER");
        static const int FAILED_TO_AUTHENTICATE_WITH_SERVICE_HASH = HashingUtils::HashString("FAILED_TO_AUTHENTICATE_WITH_SERVICE");
        static const int FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE");
        static const int FAILED_TO_CREATE_STAGING_DISKS_HASH = HashingUtils::HashString("FAILED_TO_CREATE_STAGING_DISKS");
        static const int FAILED_TO_ATTACH_STAGING_DISKS_HASH = HashingUtils::HashString("FAILED_TO_ATTACH_STAGING_DISKS");
        static const int FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT_HASH = HashingUtils::HashString("FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT");
        static const int FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER_HASH = HashingUtils::HashString("FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER");
        static const int FAILED_TO_START_DATA_TRANSFER_HASH = HashingUtils::HashString("FAILED_TO_START_DATA_TRANSFER");


        FailbackReplicationError GetFailbackReplicationErrorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_NOT_SEEN_HASH)
          {
            return FailbackReplicationError::AGENT_NOT_SEEN;
          }
          else if (hashCode == FAILBACK_CLIENT_NOT_SEEN_HASH)
          {
            return FailbackReplicationError::FAILBACK_CLIENT_NOT_SEEN;
          }
          else if (hashCode == NOT_CONVERGING_HASH)
          {
            return FailbackReplicationError::NOT_CONVERGING;
          }
          else if (hashCode == UNSTABLE_NETWORK_HASH)
          {
            return FailbackReplicationError::UNSTABLE_NETWORK;
          }
          else if (hashCode == FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION_HASH)
          {
            return FailbackReplicationError::FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION;
          }
          else if (hashCode == FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT_HASH)
          {
            return FailbackReplicationError::FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT;
          }
          else if (hashCode == FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE_HASH)
          {
            return FailbackReplicationError::FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE;
          }
          else if (hashCode == FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE_HASH)
          {
            return FailbackReplicationError::FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE;
          }
          else if (hashCode == FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION_HASH)
          {
            return FailbackReplicationError::FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION;
          }
          else if (hashCode == FAILED_GETTING_REPLICATION_STATE_HASH)
          {
            return FailbackReplicationError::FAILED_GETTING_REPLICATION_STATE;
          }
          else if (hashCode == SNAPSHOTS_FAILURE_HASH)
          {
            return FailbackReplicationError::SNAPSHOTS_FAILURE;
          }
          else if (hashCode == FAILED_TO_CREATE_SECURITY_GROUP_HASH)
          {
            return FailbackReplicationError::FAILED_TO_CREATE_SECURITY_GROUP;
          }
          else if (hashCode == FAILED_TO_LAUNCH_REPLICATION_SERVER_HASH)
          {
            return FailbackReplicationError::FAILED_TO_LAUNCH_REPLICATION_SERVER;
          }
          else if (hashCode == FAILED_TO_BOOT_REPLICATION_SERVER_HASH)
          {
            return FailbackReplicationError::FAILED_TO_BOOT_REPLICATION_SERVER;
          }
          else if (hashCode == FAILED_TO_AUTHENTICATE_WITH_SERVICE_HASH)
          {
            return FailbackReplicationError::FAILED_TO_AUTHENTICATE_WITH_SERVICE;
          }
          else if (hashCode == FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_HASH)
          {
            return FailbackReplicationError::FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE;
          }
          else if (hashCode == FAILED_TO_CREATE_STAGING_DISKS_HASH)
          {
            return FailbackReplicationError::FAILED_TO_CREATE_STAGING_DISKS;
          }
          else if (hashCode == FAILED_TO_ATTACH_STAGING_DISKS_HASH)
          {
            return FailbackReplicationError::FAILED_TO_ATTACH_STAGING_DISKS;
          }
          else if (hashCode == FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT_HASH)
          {
            return FailbackReplicationError::FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT;
          }
          else if (hashCode == FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER_HASH)
          {
            return FailbackReplicationError::FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER;
          }
          else if (hashCode == FAILED_TO_START_DATA_TRANSFER_HASH)
          {
            return FailbackReplicationError::FAILED_TO_START_DATA_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailbackReplicationError>(hashCode);
          }

          return FailbackReplicationError::NOT_SET;
        }

        Aws::String GetNameForFailbackReplicationError(FailbackReplicationError enumValue)
        {
          switch(enumValue)
          {
          case FailbackReplicationError::AGENT_NOT_SEEN:
            return "AGENT_NOT_SEEN";
          case FailbackReplicationError::FAILBACK_CLIENT_NOT_SEEN:
            return "FAILBACK_CLIENT_NOT_SEEN";
          case FailbackReplicationError::NOT_CONVERGING:
            return "NOT_CONVERGING";
          case FailbackReplicationError::UNSTABLE_NETWORK:
            return "UNSTABLE_NETWORK";
          case FailbackReplicationError::FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION:
            return "FAILED_TO_ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION";
          case FailbackReplicationError::FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT:
            return "FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT";
          case FailbackReplicationError::FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE:
            return "FAILED_TO_CONFIGURE_REPLICATION_SOFTWARE";
          case FailbackReplicationError::FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE:
            return "FAILED_TO_PAIR_AGENT_WITH_REPLICATION_SOFTWARE";
          case FailbackReplicationError::FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION:
            return "FAILED_TO_ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION";
          case FailbackReplicationError::FAILED_GETTING_REPLICATION_STATE:
            return "FAILED_GETTING_REPLICATION_STATE";
          case FailbackReplicationError::SNAPSHOTS_FAILURE:
            return "SNAPSHOTS_FAILURE";
          case FailbackReplicationError::FAILED_TO_CREATE_SECURITY_GROUP:
            return "FAILED_TO_CREATE_SECURITY_GROUP";
          case FailbackReplicationError::FAILED_TO_LAUNCH_REPLICATION_SERVER:
            return "FAILED_TO_LAUNCH_REPLICATION_SERVER";
          case FailbackReplicationError::FAILED_TO_BOOT_REPLICATION_SERVER:
            return "FAILED_TO_BOOT_REPLICATION_SERVER";
          case FailbackReplicationError::FAILED_TO_AUTHENTICATE_WITH_SERVICE:
            return "FAILED_TO_AUTHENTICATE_WITH_SERVICE";
          case FailbackReplicationError::FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE:
            return "FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE";
          case FailbackReplicationError::FAILED_TO_CREATE_STAGING_DISKS:
            return "FAILED_TO_CREATE_STAGING_DISKS";
          case FailbackReplicationError::FAILED_TO_ATTACH_STAGING_DISKS:
            return "FAILED_TO_ATTACH_STAGING_DISKS";
          case FailbackReplicationError::FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT:
            return "FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT";
          case FailbackReplicationError::FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER:
            return "FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER";
          case FailbackReplicationError::FAILED_TO_START_DATA_TRANSFER:
            return "FAILED_TO_START_DATA_TRANSFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailbackReplicationErrorMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
