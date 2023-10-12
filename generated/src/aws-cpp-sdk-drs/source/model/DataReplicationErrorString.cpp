/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DataReplicationErrorString.h>
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
      namespace DataReplicationErrorStringMapper
      {

        static constexpr uint32_t AGENT_NOT_SEEN_HASH = ConstExprHashingUtils::HashString("AGENT_NOT_SEEN");
        static constexpr uint32_t SNAPSHOTS_FAILURE_HASH = ConstExprHashingUtils::HashString("SNAPSHOTS_FAILURE");
        static constexpr uint32_t NOT_CONVERGING_HASH = ConstExprHashingUtils::HashString("NOT_CONVERGING");
        static constexpr uint32_t UNSTABLE_NETWORK_HASH = ConstExprHashingUtils::HashString("UNSTABLE_NETWORK");
        static constexpr uint32_t FAILED_TO_CREATE_SECURITY_GROUP_HASH = ConstExprHashingUtils::HashString("FAILED_TO_CREATE_SECURITY_GROUP");
        static constexpr uint32_t FAILED_TO_LAUNCH_REPLICATION_SERVER_HASH = ConstExprHashingUtils::HashString("FAILED_TO_LAUNCH_REPLICATION_SERVER");
        static constexpr uint32_t FAILED_TO_BOOT_REPLICATION_SERVER_HASH = ConstExprHashingUtils::HashString("FAILED_TO_BOOT_REPLICATION_SERVER");
        static constexpr uint32_t FAILED_TO_AUTHENTICATE_WITH_SERVICE_HASH = ConstExprHashingUtils::HashString("FAILED_TO_AUTHENTICATE_WITH_SERVICE");
        static constexpr uint32_t FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_HASH = ConstExprHashingUtils::HashString("FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE");
        static constexpr uint32_t FAILED_TO_CREATE_STAGING_DISKS_HASH = ConstExprHashingUtils::HashString("FAILED_TO_CREATE_STAGING_DISKS");
        static constexpr uint32_t FAILED_TO_ATTACH_STAGING_DISKS_HASH = ConstExprHashingUtils::HashString("FAILED_TO_ATTACH_STAGING_DISKS");
        static constexpr uint32_t FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT_HASH = ConstExprHashingUtils::HashString("FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT");
        static constexpr uint32_t FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER_HASH = ConstExprHashingUtils::HashString("FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER");
        static constexpr uint32_t FAILED_TO_START_DATA_TRANSFER_HASH = ConstExprHashingUtils::HashString("FAILED_TO_START_DATA_TRANSFER");


        DataReplicationErrorString GetDataReplicationErrorStringForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_NOT_SEEN_HASH)
          {
            return DataReplicationErrorString::AGENT_NOT_SEEN;
          }
          else if (hashCode == SNAPSHOTS_FAILURE_HASH)
          {
            return DataReplicationErrorString::SNAPSHOTS_FAILURE;
          }
          else if (hashCode == NOT_CONVERGING_HASH)
          {
            return DataReplicationErrorString::NOT_CONVERGING;
          }
          else if (hashCode == UNSTABLE_NETWORK_HASH)
          {
            return DataReplicationErrorString::UNSTABLE_NETWORK;
          }
          else if (hashCode == FAILED_TO_CREATE_SECURITY_GROUP_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_CREATE_SECURITY_GROUP;
          }
          else if (hashCode == FAILED_TO_LAUNCH_REPLICATION_SERVER_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_LAUNCH_REPLICATION_SERVER;
          }
          else if (hashCode == FAILED_TO_BOOT_REPLICATION_SERVER_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_BOOT_REPLICATION_SERVER;
          }
          else if (hashCode == FAILED_TO_AUTHENTICATE_WITH_SERVICE_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_AUTHENTICATE_WITH_SERVICE;
          }
          else if (hashCode == FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE;
          }
          else if (hashCode == FAILED_TO_CREATE_STAGING_DISKS_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_CREATE_STAGING_DISKS;
          }
          else if (hashCode == FAILED_TO_ATTACH_STAGING_DISKS_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_ATTACH_STAGING_DISKS;
          }
          else if (hashCode == FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT;
          }
          else if (hashCode == FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER;
          }
          else if (hashCode == FAILED_TO_START_DATA_TRANSFER_HASH)
          {
            return DataReplicationErrorString::FAILED_TO_START_DATA_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationErrorString>(hashCode);
          }

          return DataReplicationErrorString::NOT_SET;
        }

        Aws::String GetNameForDataReplicationErrorString(DataReplicationErrorString enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationErrorString::NOT_SET:
            return {};
          case DataReplicationErrorString::AGENT_NOT_SEEN:
            return "AGENT_NOT_SEEN";
          case DataReplicationErrorString::SNAPSHOTS_FAILURE:
            return "SNAPSHOTS_FAILURE";
          case DataReplicationErrorString::NOT_CONVERGING:
            return "NOT_CONVERGING";
          case DataReplicationErrorString::UNSTABLE_NETWORK:
            return "UNSTABLE_NETWORK";
          case DataReplicationErrorString::FAILED_TO_CREATE_SECURITY_GROUP:
            return "FAILED_TO_CREATE_SECURITY_GROUP";
          case DataReplicationErrorString::FAILED_TO_LAUNCH_REPLICATION_SERVER:
            return "FAILED_TO_LAUNCH_REPLICATION_SERVER";
          case DataReplicationErrorString::FAILED_TO_BOOT_REPLICATION_SERVER:
            return "FAILED_TO_BOOT_REPLICATION_SERVER";
          case DataReplicationErrorString::FAILED_TO_AUTHENTICATE_WITH_SERVICE:
            return "FAILED_TO_AUTHENTICATE_WITH_SERVICE";
          case DataReplicationErrorString::FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE:
            return "FAILED_TO_DOWNLOAD_REPLICATION_SOFTWARE";
          case DataReplicationErrorString::FAILED_TO_CREATE_STAGING_DISKS:
            return "FAILED_TO_CREATE_STAGING_DISKS";
          case DataReplicationErrorString::FAILED_TO_ATTACH_STAGING_DISKS:
            return "FAILED_TO_ATTACH_STAGING_DISKS";
          case DataReplicationErrorString::FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT:
            return "FAILED_TO_PAIR_REPLICATION_SERVER_WITH_AGENT";
          case DataReplicationErrorString::FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER:
            return "FAILED_TO_CONNECT_AGENT_TO_REPLICATION_SERVER";
          case DataReplicationErrorString::FAILED_TO_START_DATA_TRANSFER:
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

      } // namespace DataReplicationErrorStringMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
