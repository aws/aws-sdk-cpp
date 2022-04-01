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
