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

        static constexpr uint32_t LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE_HASH = ConstExprHashingUtils::HashString("LINK_FAILBACK_CLIENT_WITH_RECOVERY_INSTANCE");
        static constexpr uint32_t COMPLETE_VOLUME_MAPPING_HASH = ConstExprHashingUtils::HashString("COMPLETE_VOLUME_MAPPING");
        static constexpr uint32_t ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION_HASH = ConstExprHashingUtils::HashString("ESTABLISH_RECOVERY_INSTANCE_COMMUNICATION");
        static constexpr uint32_t DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT_HASH = ConstExprHashingUtils::HashString("DOWNLOAD_REPLICATION_SOFTWARE_TO_FAILBACK_CLIENT");
        static constexpr uint32_t CONFIGURE_REPLICATION_SOFTWARE_HASH = ConstExprHashingUtils::HashString("CONFIGURE_REPLICATION_SOFTWARE");
        static constexpr uint32_t PAIR_AGENT_WITH_REPLICATION_SOFTWARE_HASH = ConstExprHashingUtils::HashString("PAIR_AGENT_WITH_REPLICATION_SOFTWARE");
        static constexpr uint32_t ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION_HASH = ConstExprHashingUtils::HashString("ESTABLISH_AGENT_REPLICATOR_SOFTWARE_COMMUNICATION");
        static constexpr uint32_t WAIT_HASH = ConstExprHashingUtils::HashString("WAIT");
        static constexpr uint32_t CREATE_SECURITY_GROUP_HASH = ConstExprHashingUtils::HashString("CREATE_SECURITY_GROUP");
        static constexpr uint32_t LAUNCH_REPLICATION_SERVER_HASH = ConstExprHashingUtils::HashString("LAUNCH_REPLICATION_SERVER");
        static constexpr uint32_t BOOT_REPLICATION_SERVER_HASH = ConstExprHashingUtils::HashString("BOOT_REPLICATION_SERVER");
        static constexpr uint32_t AUTHENTICATE_WITH_SERVICE_HASH = ConstExprHashingUtils::HashString("AUTHENTICATE_WITH_SERVICE");
        static constexpr uint32_t DOWNLOAD_REPLICATION_SOFTWARE_HASH = ConstExprHashingUtils::HashString("DOWNLOAD_REPLICATION_SOFTWARE");
        static constexpr uint32_t CREATE_STAGING_DISKS_HASH = ConstExprHashingUtils::HashString("CREATE_STAGING_DISKS");
        static constexpr uint32_t ATTACH_STAGING_DISKS_HASH = ConstExprHashingUtils::HashString("ATTACH_STAGING_DISKS");
        static constexpr uint32_t PAIR_REPLICATION_SERVER_WITH_AGENT_HASH = ConstExprHashingUtils::HashString("PAIR_REPLICATION_SERVER_WITH_AGENT");
        static constexpr uint32_t CONNECT_AGENT_TO_REPLICATION_SERVER_HASH = ConstExprHashingUtils::HashString("CONNECT_AGENT_TO_REPLICATION_SERVER");
        static constexpr uint32_t START_DATA_TRANSFER_HASH = ConstExprHashingUtils::HashString("START_DATA_TRANSFER");


        RecoveryInstanceDataReplicationInitiationStepName GetRecoveryInstanceDataReplicationInitiationStepNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RecoveryInstanceDataReplicationInitiationStepName::NOT_SET:
            return {};
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
