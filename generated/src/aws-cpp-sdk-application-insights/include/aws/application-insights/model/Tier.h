/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class Tier
  {
    NOT_SET,
    CUSTOM,
    DEFAULT,
    DOT_NET_CORE,
    DOT_NET_WORKER,
    DOT_NET_WEB_TIER,
    DOT_NET_WEB,
    SQL_SERVER,
    SQL_SERVER_ALWAYSON_AVAILABILITY_GROUP,
    MYSQL,
    POSTGRESQL,
    JAVA_JMX,
    ORACLE,
    SAP_HANA_MULTI_NODE,
    SAP_HANA_SINGLE_NODE,
    SAP_HANA_HIGH_AVAILABILITY,
    SQL_SERVER_FAILOVER_CLUSTER_INSTANCE,
    SHAREPOINT,
    ACTIVE_DIRECTORY,
    SAP_NETWEAVER_STANDARD,
    SAP_NETWEAVER_DISTRIBUTED,
    SAP_NETWEAVER_HIGH_AVAILABILITY
  };

namespace TierMapper
{
AWS_APPLICATIONINSIGHTS_API Tier GetTierForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForTier(Tier value);
} // namespace TierMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
