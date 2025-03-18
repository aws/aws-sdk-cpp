﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("serviceRoleArn", m_serviceRoleArn);

  }

  if(m_dynamodbConfigHasBeenSet)
  {
   payload.WithObject("dynamodbConfig", m_dynamodbConfig.Jsonize());

  }

  if(m_lambdaConfigHasBeenSet)
  {
   payload.WithObject("lambdaConfig", m_lambdaConfig.Jsonize());

  }

  if(m_elasticsearchConfigHasBeenSet)
  {
   payload.WithObject("elasticsearchConfig", m_elasticsearchConfig.Jsonize());

  }

  if(m_openSearchServiceConfigHasBeenSet)
  {
   payload.WithObject("openSearchServiceConfig", m_openSearchServiceConfig.Jsonize());

  }

  if(m_httpConfigHasBeenSet)
  {
   payload.WithObject("httpConfig", m_httpConfig.Jsonize());

  }

  if(m_relationalDatabaseConfigHasBeenSet)
  {
   payload.WithObject("relationalDatabaseConfig", m_relationalDatabaseConfig.Jsonize());

  }

  if(m_eventBridgeConfigHasBeenSet)
  {
   payload.WithObject("eventBridgeConfig", m_eventBridgeConfig.Jsonize());

  }

  if(m_metricsConfigHasBeenSet)
  {
   payload.WithString("metricsConfig", DataSourceLevelMetricsConfigMapper::GetNameForDataSourceLevelMetricsConfig(m_metricsConfig));
  }

  return payload.View().WriteReadable();
}




