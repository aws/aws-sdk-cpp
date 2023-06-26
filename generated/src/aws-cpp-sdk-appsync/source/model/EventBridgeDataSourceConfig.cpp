/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EventBridgeDataSourceConfig.h>
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

EventBridgeDataSourceConfig::EventBridgeDataSourceConfig() : 
    m_eventBusArnHasBeenSet(false)
{
}

EventBridgeDataSourceConfig::EventBridgeDataSourceConfig(JsonView jsonValue) : 
    m_eventBusArnHasBeenSet(false)
{
  *this = jsonValue;
}

EventBridgeDataSourceConfig& EventBridgeDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventBusArn"))
  {
    m_eventBusArn = jsonValue.GetString("eventBusArn");

    m_eventBusArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EventBridgeDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_eventBusArnHasBeenSet)
  {
   payload.WithString("eventBusArn", m_eventBusArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
