/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ReplicationConfigurationReplicatedDiskStagingDiskType.h>
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
      namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int GP2_HASH = HashingUtils::HashString("GP2");
        static const int GP3_HASH = HashingUtils::HashString("GP3");
        static const int IO1_HASH = HashingUtils::HashString("IO1");
        static const int SC1_HASH = HashingUtils::HashString("SC1");
        static const int ST1_HASH = HashingUtils::HashString("ST1");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        ReplicationConfigurationReplicatedDiskStagingDiskType GetReplicationConfigurationReplicatedDiskStagingDiskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::AUTO;
          }
          else if (hashCode == GP2_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::GP2;
          }
          else if (hashCode == GP3_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::GP3;
          }
          else if (hashCode == IO1_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::IO1;
          }
          else if (hashCode == SC1_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::SC1;
          }
          else if (hashCode == ST1_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::ST1;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationConfigurationReplicatedDiskStagingDiskType>(hashCode);
          }

          return ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET;
        }

        Aws::String GetNameForReplicationConfigurationReplicatedDiskStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET:
            return {};
          case ReplicationConfigurationReplicatedDiskStagingDiskType::AUTO:
            return "AUTO";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::GP2:
            return "GP2";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::GP3:
            return "GP3";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::IO1:
            return "IO1";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::SC1:
            return "SC1";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::ST1:
            return "ST1";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
