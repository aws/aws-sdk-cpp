/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateResolverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResolverRequest::CreateResolverRequest() : 
    m_apiIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_requestMappingTemplateHasBeenSet(false),
    m_responseMappingTemplateHasBeenSet(false),
    m_kind(ResolverKind::NOT_SET),
    m_kindHasBeenSet(false),
    m_pipelineConfigHasBeenSet(false),
    m_syncConfigHasBeenSet(false),
    m_cachingConfigHasBeenSet(false),
    m_maxBatchSize(0),
    m_maxBatchSizeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

Aws::String CreateResolverRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

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

  return payload.View().WriteReadable();
}




