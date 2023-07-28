﻿/**
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

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int DOT_NET_CORE_HASH = HashingUtils::HashString("DOT_NET_CORE");
        static const int DOT_NET_WORKER_HASH = HashingUtils::HashString("DOT_NET_WORKER");
        static const int DOT_NET_WEB_TIER_HASH = HashingUtils::HashString("DOT_NET_WEB_TIER");
        static const int DOT_NET_WEB_HASH = HashingUtils::HashString("DOT_NET_WEB");
        static const int SQL_SERVER_HASH = HashingUtils::HashString("SQL_SERVER");
        static const int SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP_HASH = HashingUtils::HashString("SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP");
        static const int MYSQL_HASH = HashingUtils::HashString("MYSQL");
        static const int POSTGRESQL_HASH = HashingUtils::HashString("POSTGRESQL");
        static const int JAVA_JMX_HASH = HashingUtils::HashString("JAVA_JMX");
        static const int ORACLE_HASH = HashingUtils::HashString("ORACLE");
        static const int SAP_HANA_MULTI_NODE_HASH = HashingUtils::HashString("SAP_HANA_MULTI_NODE");
        static const int SAP_HANA_SINGLE_NODE_HASH = HashingUtils::HashString("SAP_HANA_SINGLE_NODE");
        static const int SAP_HANA_HIGH_AVAILABILITY_HASH = HashingUtils::HashString("SAP_HANA_HIGH_AVAILABILITY");
        static const int SQL_SERVER_FAILOVER_CLUSTER_INSTANCE_HASH = HashingUtils::HashString("SQL_SERVER_FAILOVER_CLUSTER_INSTANCE");
        static const int SHAREPOINT_HASH = HashingUtils::HashString("SHAREPOINT");
        static const int ACTIVE_DIRECTORY_HASH = HashingUtils::HashString("ACTIVE_DIRECTORY");
        static const int SAP_NETWEAVER_STANDARD_HASH = HashingUtils::HashString("SAP_NETWEAVER_STANDARD");
        static const int SAP_NETWEAVER_DISTRIBUTED_HASH = HashingUtils::HashString("SAP_NETWEAVER_DISTRIBUTED");
        static const int SAP_NETWEAVER_HIGH_AVAILABILITY_HASH = HashingUtils::HashString("SAP_NETWEAVER_HIGH_AVAILABILITY");


        Tier GetTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
