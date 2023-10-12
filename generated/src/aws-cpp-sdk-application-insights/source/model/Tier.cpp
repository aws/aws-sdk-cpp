/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/Tier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace TierMapper
      {

        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");
        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t DOT_NET_CORE_HASH = ConstExprHashingUtils::HashString("DOT_NET_CORE");
        static constexpr uint32_t DOT_NET_WORKER_HASH = ConstExprHashingUtils::HashString("DOT_NET_WORKER");
        static constexpr uint32_t DOT_NET_WEB_TIER_HASH = ConstExprHashingUtils::HashString("DOT_NET_WEB_TIER");
        static constexpr uint32_t DOT_NET_WEB_HASH = ConstExprHashingUtils::HashString("DOT_NET_WEB");
        static constexpr uint32_t SQL_SERVER_HASH = ConstExprHashingUtils::HashString("SQL_SERVER");
        static constexpr uint32_t SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP_HASH = ConstExprHashingUtils::HashString("SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP");
        static constexpr uint32_t MYSQL_HASH = ConstExprHashingUtils::HashString("MYSQL");
        static constexpr uint32_t POSTGRESQL_HASH = ConstExprHashingUtils::HashString("POSTGRESQL");
        static constexpr uint32_t JAVA_JMX_HASH = ConstExprHashingUtils::HashString("JAVA_JMX");
        static constexpr uint32_t ORACLE_HASH = ConstExprHashingUtils::HashString("ORACLE");
        static constexpr uint32_t SAP_HANA_MULTI_NODE_HASH = ConstExprHashingUtils::HashString("SAP_HANA_MULTI_NODE");
        static constexpr uint32_t SAP_HANA_SINGLE_NODE_HASH = ConstExprHashingUtils::HashString("SAP_HANA_SINGLE_NODE");
        static constexpr uint32_t SAP_HANA_HIGH_AVAILABILITY_HASH = ConstExprHashingUtils::HashString("SAP_HANA_HIGH_AVAILABILITY");
        static constexpr uint32_t SQL_SERVER_FAILOVER_CLUSTER_INSTANCE_HASH = ConstExprHashingUtils::HashString("SQL_SERVER_FAILOVER_CLUSTER_INSTANCE");
        static constexpr uint32_t SHAREPOINT_HASH = ConstExprHashingUtils::HashString("SHAREPOINT");
        static constexpr uint32_t ACTIVE_DIRECTORY_HASH = ConstExprHashingUtils::HashString("ACTIVE_DIRECTORY");
        static constexpr uint32_t SAP_NETWEAVER_STANDARD_HASH = ConstExprHashingUtils::HashString("SAP_NETWEAVER_STANDARD");
        static constexpr uint32_t SAP_NETWEAVER_DISTRIBUTED_HASH = ConstExprHashingUtils::HashString("SAP_NETWEAVER_DISTRIBUTED");
        static constexpr uint32_t SAP_NETWEAVER_HIGH_AVAILABILITY_HASH = ConstExprHashingUtils::HashString("SAP_NETWEAVER_HIGH_AVAILABILITY");


        Tier GetTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return Tier::CUSTOM;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return Tier::DEFAULT;
          }
          else if (hashCode == DOT_NET_CORE_HASH)
          {
            return Tier::DOT_NET_CORE;
          }
          else if (hashCode == DOT_NET_WORKER_HASH)
          {
            return Tier::DOT_NET_WORKER;
          }
          else if (hashCode == DOT_NET_WEB_TIER_HASH)
          {
            return Tier::DOT_NET_WEB_TIER;
          }
          else if (hashCode == DOT_NET_WEB_HASH)
          {
            return Tier::DOT_NET_WEB;
          }
          else if (hashCode == SQL_SERVER_HASH)
          {
            return Tier::SQL_SERVER;
          }
          else if (hashCode == SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP_HASH)
          {
            return Tier::SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return Tier::MYSQL;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return Tier::POSTGRESQL;
          }
          else if (hashCode == JAVA_JMX_HASH)
          {
            return Tier::JAVA_JMX;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return Tier::ORACLE;
          }
          else if (hashCode == SAP_HANA_MULTI_NODE_HASH)
          {
            return Tier::SAP_HANA_MULTI_NODE;
          }
          else if (hashCode == SAP_HANA_SINGLE_NODE_HASH)
          {
            return Tier::SAP_HANA_SINGLE_NODE;
          }
          else if (hashCode == SAP_HANA_HIGH_AVAILABILITY_HASH)
          {
            return Tier::SAP_HANA_HIGH_AVAILABILITY;
          }
          else if (hashCode == SQL_SERVER_FAILOVER_CLUSTER_INSTANCE_HASH)
          {
            return Tier::SQL_SERVER_FAILOVER_CLUSTER_INSTANCE;
          }
          else if (hashCode == SHAREPOINT_HASH)
          {
            return Tier::SHAREPOINT;
          }
          else if (hashCode == ACTIVE_DIRECTORY_HASH)
          {
            return Tier::ACTIVE_DIRECTORY;
          }
          else if (hashCode == SAP_NETWEAVER_STANDARD_HASH)
          {
            return Tier::SAP_NETWEAVER_STANDARD;
          }
          else if (hashCode == SAP_NETWEAVER_DISTRIBUTED_HASH)
          {
            return Tier::SAP_NETWEAVER_DISTRIBUTED;
          }
          else if (hashCode == SAP_NETWEAVER_HIGH_AVAILABILITY_HASH)
          {
            return Tier::SAP_NETWEAVER_HIGH_AVAILABILITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tier>(hashCode);
          }

          return Tier::NOT_SET;
        }

        Aws::String GetNameForTier(Tier enumValue)
        {
          switch(enumValue)
          {
          case Tier::NOT_SET:
            return {};
          case Tier::CUSTOM:
            return "CUSTOM";
          case Tier::DEFAULT:
            return "DEFAULT";
          case Tier::DOT_NET_CORE:
            return "DOT_NET_CORE";
          case Tier::DOT_NET_WORKER:
            return "DOT_NET_WORKER";
          case Tier::DOT_NET_WEB_TIER:
            return "DOT_NET_WEB_TIER";
          case Tier::DOT_NET_WEB:
            return "DOT_NET_WEB";
          case Tier::SQL_SERVER:
            return "SQL_SERVER";
          case Tier::SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP:
            return "SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP";
          case Tier::MYSQL:
            return "MYSQL";
          case Tier::POSTGRESQL:
            return "POSTGRESQL";
          case Tier::JAVA_JMX:
            return "JAVA_JMX";
          case Tier::ORACLE:
            return "ORACLE";
          case Tier::SAP_HANA_MULTI_NODE:
            return "SAP_HANA_MULTI_NODE";
          case Tier::SAP_HANA_SINGLE_NODE:
            return "SAP_HANA_SINGLE_NODE";
          case Tier::SAP_HANA_HIGH_AVAILABILITY:
            return "SAP_HANA_HIGH_AVAILABILITY";
          case Tier::SQL_SERVER_FAILOVER_CLUSTER_INSTANCE:
            return "SQL_SERVER_FAILOVER_CLUSTER_INSTANCE";
          case Tier::SHAREPOINT:
            return "SHAREPOINT";
          case Tier::ACTIVE_DIRECTORY:
            return "ACTIVE_DIRECTORY";
          case Tier::SAP_NETWEAVER_STANDARD:
            return "SAP_NETWEAVER_STANDARD";
          case Tier::SAP_NETWEAVER_DISTRIBUTED:
            return "SAP_NETWEAVER_DISTRIBUTED";
          case Tier::SAP_NETWEAVER_HIGH_AVAILABILITY:
            return "SAP_NETWEAVER_HIGH_AVAILABILITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TierMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
