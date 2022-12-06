/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int db_instance_HASH = HashingUtils::HashString("db-instance");
        static const int db_parameter_group_HASH = HashingUtils::HashString("db-parameter-group");
        static const int db_security_group_HASH = HashingUtils::HashString("db-security-group");
        static const int db_snapshot_HASH = HashingUtils::HashString("db-snapshot");
        static const int db_cluster_HASH = HashingUtils::HashString("db-cluster");
        static const int db_cluster_snapshot_HASH = HashingUtils::HashString("db-cluster-snapshot");
        static const int custom_engine_version_HASH = HashingUtils::HashString("custom-engine-version");
        static const int db_proxy_HASH = HashingUtils::HashString("db-proxy");
        static const int blue_green_deployment_HASH = HashingUtils::HashString("blue-green-deployment");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == db_instance_HASH)
          {
            return SourceType::db_instance;
          }
          else if (hashCode == db_parameter_group_HASH)
          {
            return SourceType::db_parameter_group;
          }
          else if (hashCode == db_security_group_HASH)
          {
            return SourceType::db_security_group;
          }
          else if (hashCode == db_snapshot_HASH)
          {
            return SourceType::db_snapshot;
          }
          else if (hashCode == db_cluster_HASH)
          {
            return SourceType::db_cluster;
          }
          else if (hashCode == db_cluster_snapshot_HASH)
          {
            return SourceType::db_cluster_snapshot;
          }
          else if (hashCode == custom_engine_version_HASH)
          {
            return SourceType::custom_engine_version;
          }
          else if (hashCode == db_proxy_HASH)
          {
            return SourceType::db_proxy;
          }
          else if (hashCode == blue_green_deployment_HASH)
          {
            return SourceType::blue_green_deployment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::db_instance:
            return "db-instance";
          case SourceType::db_parameter_group:
            return "db-parameter-group";
          case SourceType::db_security_group:
            return "db-security-group";
          case SourceType::db_snapshot:
            return "db-snapshot";
          case SourceType::db_cluster:
            return "db-cluster";
          case SourceType::db_cluster_snapshot:
            return "db-cluster-snapshot";
          case SourceType::custom_engine_version:
            return "custom-engine-version";
          case SourceType::db_proxy:
            return "db-proxy";
          case SourceType::blue_green_deployment:
            return "blue-green-deployment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
