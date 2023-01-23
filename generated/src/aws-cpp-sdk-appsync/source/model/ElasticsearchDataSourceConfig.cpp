/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ElasticsearchDataSourceConfig.h>
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

ElasticsearchDataSourceConfig::ElasticsearchDataSourceConfig() : 
    m_endpointHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

ElasticsearchDataSourceConfig::ElasticsearchDataSourceConfig(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchDataSourceConfig& ElasticsearchDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
