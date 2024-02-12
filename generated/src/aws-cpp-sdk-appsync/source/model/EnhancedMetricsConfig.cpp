/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EnhancedMetricsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

EnhancedMetricsConfig::EnhancedMetricsConfig() : 
    m_resolverLevelMetricsBehavior(ResolverLevelMetricsBehavior::NOT_SET),
    m_resolverLevelMetricsBehaviorHasBeenSet(false),
    m_dataSourceLevelMetricsBehavior(DataSourceLevelMetricsBehavior::NOT_SET),
    m_dataSourceLevelMetricsBehaviorHasBeenSet(false),
    m_operationLevelMetricsConfig(OperationLevelMetricsConfig::NOT_SET),
    m_operationLevelMetricsConfigHasBeenSet(false)
{
}

EnhancedMetricsConfig::EnhancedMetricsConfig(JsonView jsonValue) : 
    m_resolverLevelMetricsBehavior(ResolverLevelMetricsBehavior::NOT_SET),
    m_resolverLevelMetricsBehaviorHasBeenSet(false),
    m_dataSourceLevelMetricsBehavior(DataSourceLevelMetricsBehavior::NOT_SET),
    m_dataSourceLevelMetricsBehaviorHasBeenSet(false),
    m_operationLevelMetricsConfig(OperationLevelMetricsConfig::NOT_SET),
    m_operationLevelMetricsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EnhancedMetricsConfig& EnhancedMetricsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resolverLevelMetricsBehavior"))
  {
    m_resolverLevelMetricsBehavior = ResolverLevelMetricsBehaviorMapper::GetResolverLevelMetricsBehaviorForName(jsonValue.GetString("resolverLevelMetricsBehavior"));

    m_resolverLevelMetricsBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceLevelMetricsBehavior"))
  {
    m_dataSourceLevelMetricsBehavior = DataSourceLevelMetricsBehaviorMapper::GetDataSourceLevelMetricsBehaviorForName(jsonValue.GetString("dataSourceLevelMetricsBehavior"));

    m_dataSourceLevelMetricsBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationLevelMetricsConfig"))
  {
    m_operationLevelMetricsConfig = OperationLevelMetricsConfigMapper::GetOperationLevelMetricsConfigForName(jsonValue.GetString("operationLevelMetricsConfig"));

    m_operationLevelMetricsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EnhancedMetricsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_resolverLevelMetricsBehaviorHasBeenSet)
  {
   payload.WithString("resolverLevelMetricsBehavior", ResolverLevelMetricsBehaviorMapper::GetNameForResolverLevelMetricsBehavior(m_resolverLevelMetricsBehavior));
  }

  if(m_dataSourceLevelMetricsBehaviorHasBeenSet)
  {
   payload.WithString("dataSourceLevelMetricsBehavior", DataSourceLevelMetricsBehaviorMapper::GetNameForDataSourceLevelMetricsBehavior(m_dataSourceLevelMetricsBehavior));
  }

  if(m_operationLevelMetricsConfigHasBeenSet)
  {
   payload.WithString("operationLevelMetricsConfig", OperationLevelMetricsConfigMapper::GetNameForOperationLevelMetricsConfig(m_operationLevelMetricsConfig));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
