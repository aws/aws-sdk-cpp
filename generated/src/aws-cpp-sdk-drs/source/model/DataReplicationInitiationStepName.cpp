/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DataReplicationInitiationStepName.h>
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
      namespace DataReplicationInitiationStepNameMapper
      {

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


        DataReplicationInitiationStepName GetDataReplicationInitiationStepNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAIT_HASH)
          {
            return DataReplicationInitiationStepName::WAIT;
          }
          else if (hashCode == CREATE_SECURITY_GROUP_HASH)
          {
            return DataReplicationInitiationStepName::CREATE_SECURITY_GROUP;
          }
          else if (hashCode == LAUNCH_REPLICATION_SERVER_HASH)
          {
            return DataReplicationInitiationStepName::LAUNCH_REPLICATION_SERVER;
          }
          else if (hashCode == BOOT_REPLICATION_SERVER_HASH)
          {
            return DataReplicationInitiationStepName::BOOT_REPLICATION_SERVER;
          }
          else if (hashCode == AUTHENTICATE_WITH_SERVICE_HASH)
          {
            return DataReplicationInitiationStepName::AUTHENTICATE_WITH_SERVICE;
          }
          else if (hashCode == DOWNLOAD_REPLICATION_SOFTWARE_HASH)
          {
            return DataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE;
          }
          else if (hashCode == CREATE_STAGING_DISKS_HASH)
          {
            return DataReplicationInitiationStepName::CREATE_STAGING_DISKS;
          }
          else if (hashCode == ATTACH_STAGING_DISKS_HASH)
          {
            return DataReplicationInitiationStepName::ATTACH_STAGING_DISKS;
          }
          else if (hashCode == PAIR_REPLICATION_SERVER_WITH_AGENT_HASH)
          {
            return DataReplicationInitiationStepName::PAIR_REPLICATION_SERVER_WITH_AGENT;
          }
          else if (hashCode == CONNECT_AGENT_TO_REPLICATION_SERVER_HASH)
          {
            return DataReplicationInitiationStepName::CONNECT_AGENT_TO_REPLICATION_SERVER;
          }
          else if (hashCode == START_DATA_TRANSFER_HASH)
          {
            return DataReplicationInitiationStepName::START_DATA_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationInitiationStepName>(hashCode);
          }

          return DataReplicationInitiationStepName::NOT_SET;
        }

        Aws::String GetNameForDataReplicationInitiationStepName(DataReplicationInitiationStepName enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationInitiationStepName::NOT_SET:
            return {};
          case DataReplicationInitiationStepName::WAIT:
            return "WAIT";
          case DataReplicationInitiationStepName::CREATE_SECURITY_GROUP:
            return "CREATE_SECURITY_GROUP";
          case DataReplicationInitiationStepName::LAUNCH_REPLICATION_SERVER:
            return "LAUNCH_REPLICATION_SERVER";
          case DataReplicationInitiationStepName::BOOT_REPLICATION_SERVER:
            return "BOOT_REPLICATION_SERVER";
          case DataReplicationInitiationStepName::AUTHENTICATE_WITH_SERVICE:
            return "AUTHENTICATE_WITH_SERVICE";
          case DataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE:
            return "DOWNLOAD_REPLICATION_SOFTWARE";
          case DataReplicationInitiationStepName::CREATE_STAGING_DISKS:
            return "CREATE_STAGING_DISKS";
          case DataReplicationInitiationStepName::ATTACH_STAGING_DISKS:
            return "ATTACH_STAGING_DISKS";
          case DataReplicationInitiationStepName::PAIR_REPLICATION_SERVER_WITH_AGENT:
            return "PAIR_REPLICATION_SERVER_WITH_AGENT";
          case DataReplicationInitiationStepName::CONNECT_AGENT_TO_REPLICATION_SERVER:
            return "CONNECT_AGENT_TO_REPLICATION_SERVER";
          case DataReplicationInitiationStepName::START_DATA_TRANSFER:
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

      } // namespace DataReplicationInitiationStepNameMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
