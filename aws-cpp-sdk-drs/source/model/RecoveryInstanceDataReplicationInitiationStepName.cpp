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
