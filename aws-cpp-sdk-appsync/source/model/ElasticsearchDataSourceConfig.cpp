/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ElasticsearchDataSourceConfig::ElasticsearchDataSourceConfig(const JsonValue& jsonValue) : 
    m_endpointHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchDataSourceConfig& ElasticsearchDataSourceConfig::operator =(const JsonValue& jsonValue)
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
