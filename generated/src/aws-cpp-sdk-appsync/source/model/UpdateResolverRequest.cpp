/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/UpdateResolverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateResolverRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("dataSourceName", m_dataSourceName);

  }

  if(m_requestMappingTemplateHasBeenSet)
  {
   payload.WithString("requestMappingTemplate", m_requestMappingTemplate);

  }

  if(m_responseMappingTemplateHasBeenSet)
  {
   payload.WithString("responseMappingTemplate", m_responseMappingTemplate);

  }

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", ResolverKindMapper::GetNameForResolverKind(m_kind));
  }

  if(m_pipelineConfigHasBeenSet)
  {
   payload.WithObject("pipelineConfig", m_pipelineConfig.Jsonize());

  }

  if(m_syncConfigHasBeenSet)
  {
   payload.WithObject("syncConfig", m_syncConfig.Jsonize());

  }

  if(m_cachingConfigHasBeenSet)
  {
   payload.WithObject("cachingConfig", m_cachingConfig.Jsonize());

  }

  if(m_maxBatchSizeHasBeenSet)
  {
   payload.WithInteger("maxBatchSize", m_maxBatchSize);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithObject("runtime", m_runtime.Jsonize());

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_metricsConfigHasBeenSet)
  {
   payload.WithString("metricsConfig", ResolverLevelMetricsConfigMapper::GetNameForResolverLevelMetricsConfig(m_metricsConfig));
  }

  return payload.View().WriteReadable();
}




