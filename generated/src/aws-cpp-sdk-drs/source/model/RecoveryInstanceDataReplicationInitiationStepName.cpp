/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationInitiationStepName.h>
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
      namespace RecoveryInstanceDataReplicationInitiationStepNameMapper
      {

        static const int LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE_HASH = HashingUtils::HashString("LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE");
        static const int COMPLETE_VOLUME_MAPPING_HASH = HashingUtils::HashString("COMPLETE_VOLUME_MAPPING");
        static const int ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION_HASH = HashingUtils::HashString("ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION");
        static const int DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT_HASH = HashingUtils::HashString("DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT");
        static const int CONFIGURE_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("CONFIGURE_REPLICATION_SOFTWARE");
        static const int PAIR_AGENT_WITH_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("PAIR_AGENT_WITH_REPLICATION_SOFTWARE");
        static const int ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION_HASH = HashingUtils::HashString("ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION");
        static const int WAIT_HASH = HashingUtils::HashString("WAIT");
        static const int CREATE_SECURITY_GROUP_HASH = HashingUtils::HashString("CREATE_SECURITY_GROUP");
        static const int LAUNCH_REPLICATION_SERVER_HASH = HashingUtils::HashString("LAUNCH_REPLICATION_SERVER");
        static const int BOOT_REPLICATION_SERVER_HASH = HashingUtils::HashString("BOOT_REPLICATION_SERVER");
        static const int AUTHENTICATE_WITH_SERVICE_HASH = HashingUtils::HashString("AUTHENTICATE_WITH_SERVICE");
        static const int DOWNLOAD_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("DOWNLOAD_REPLICATION_SOFTWARE");
        static const int CREATE_STAGING_DISKS_HASH = HashingUtils::HashString("CREATE_STAGING_DISKS");
        static const int ATTACH_STAGING_DISKS_HASH = HashingUtils::HashString("ATTACH_STAGING_DISKS");
        static const int PAIR_REPLICATION_SERVER_WITH_AGENT_HASH = HashingUtils::HashString("PAIR_REPLICATION_SERVER_WITH_AGENT");
        static const int CONNECT_AGENT_TO_REPLICATION_SERVER_HASH = HashingUtils::HashString("CONNECT_AGENT_TO_REPLICATION_SERVER");
        static const int START_DATA_TRANSFER_HASH = HashingUtils::HashString("START_DATA_TRANSFER");


        RecoveryInstanceDataReplicationInitiationStepName GetRecoveryInstanceDataReplicationInitiationStepNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE;
          }
          else if (hashCode == COMPLETE_VOLUME_MAPPING_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::COMPLETE_VOLUME_MAPPING;
          }
          else if (hashCode == ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION;
          }
          else if (hashCode == DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT;
          }
          else if (hashCode == CONFIGURE_REPLICATION_SOFTWARE_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::CONFIGURE_REPLICATION_SOFTWARE;
          }
          else if (hashCode == PAIR_AGENT_WITH_REPLICATION_SOFTWARE_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::PAIR_AGENT_WITH_REPLICATION_SOFTWARE;
          }
          else if (hashCode == ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION;
          }
          else if (hashCode == WAIT_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::WAIT;
          }
          else if (hashCode == CREATE_SECURITY_GROUP_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::CREATE_SECURITY_GROUP;
          }
          else if (hashCode == LAUNCH_REPLICATION_SERVER_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::LAUNCH_REPLICATION_SERVER;
          }
          else if (hashCode == BOOT_REPLICATION_SERVER_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::BOOT_REPLICATION_SERVER;
          }
          else if (hashCode == AUTHENTICATE_WITH_SERVICE_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::AUTHENTICATE_WITH_SERVICE;
          }
          else if (hashCode == DOWNLOAD_REPLICATION_SOFTWARE_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE;
          }
          else if (hashCode == CREATE_STAGING_DISKS_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::CREATE_STAGING_DISKS;
          }
          else if (hashCode == ATTACH_STAGING_DISKS_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::ATTACH_STAGING_DISKS;
          }
          else if (hashCode == PAIR_REPLICATION_SERVER_WITH_AGENT_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::PAIR_REPLICATION_SERVER_WITH_AGENT;
          }
          else if (hashCode == CONNECT_AGENT_TO_REPLICATION_SERVER_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::CONNECT_AGENT_TO_REPLICATION_SERVER;
          }
          else if (hashCode == START_DATA_TRANSFER_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepName::START_DATA_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryInstanceDataReplicationInitiationStepName>(hashCode);
          }

          return RecoveryInstanceDataReplicationInitiationStepName::NOT_SET;
        }

        Aws::String GetNameForRecoveryInstanceDataReplicationInitiationStepName(RecoveryInstanceDataReplicationInitiationStepName enumValue)
        {
          switch(enumValue)
          {
          case RecoveryInstanceDataReplicationInitiationStepName::LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE:
            return "LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE";
          case RecoveryInstanceDataReplicationInitiationStepName::COMPLETE_VOLUME_MAPPING:
            return "COMPLETE_VOLUME_MAPPING";
          case RecoveryInstanceDataReplicationInitiationStepName::ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION:
            return "ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION";
          case RecoveryInstanceDataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT:
            return "DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT";
          case RecoveryInstanceDataReplicationInitiationStepName::CONFIGURE_REPLICATION_SOFTWARE:
            return "CONFIGURE_REPLICATION_SOFTWARE";
          case RecoveryInstanceDataReplicationInitiationStepName::PAIR_AGENT_WITH_REPLICATION_SOFTWARE:
            return "PAIR_AGENT_WITH_REPLICATION_SOFTWARE";
          case RecoveryInstanceDataReplicationInitiationStepName::ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION:
            return "ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION";
          case RecoveryInstanceDataReplicationInitiationStepName::WAIT:
            return "WAIT";
          case RecoveryInstanceDataReplicationInitiationStepName::CREATE_SECURITY_GROUP:
            return "CREATE_SECURITY_GROUP";
          case RecoveryInstanceDataReplicationInitiationStepName::LAUNCH_REPLICATION_SERVER:
            return "LAUNCH_REPLICATION_SERVER";
          case RecoveryInstanceDataReplicationInitiationStepName::BOOT_REPLICATION_SERVER:
            return "BOOT_REPLICATION_SERVER";
          case RecoveryInstanceDataReplicationInitiationStepName::AUTHENTICATE_WITH_SERVICE:
            return "AUTHENTICATE_WITH_SERVICE";
          case RecoveryInstanceDataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE:
            return "DOWNLOAD_REPLICATION_SOFTWARE";
          case RecoveryInstanceDataReplicationInitiationStepName::CREATE_STAGING_DISKS:
            return "CREATE_STAGING_DISKS";
          case RecoveryInstanceDataReplicationInitiationStepName::ATTACH_STAGING_DISKS:
            return "ATTACH_STAGING_DISKS";
          case RecoveryInstanceDataReplicationInitiationStepName::PAIR_REPLICATION_SERVER_WITH_AGENT:
            return "PAIR_REPLICATION_SERVER_WITH_AGENT";
          case RecoveryInstanceDataReplicationInitiationStepName::CONNECT_AGENT_TO_REPLICATION_SERVER:
            return "CONNECT_AGENT_TO_REPLICATION_SERVER";
          case RecoveryInstanceDataReplicationInitiationStepName::START_DATA_TRANSFER:
            return "START_DATA_TRANSFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryInstanceDataReplicationInitiationStepNameMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
