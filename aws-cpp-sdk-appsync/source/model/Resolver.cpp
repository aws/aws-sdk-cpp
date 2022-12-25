/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/Resolver.h>
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

Resolver::Resolver() : 
    m_typeNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_resolverArnHasBeenSet(false),
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

Resolver::Resolver(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_resolverArnHasBeenSet(false),
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
  *this = jsonValue;
}

Resolver& Resolver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceName"))
  {
    m_dataSourceName = jsonValue.GetString("dataSourceName");

    m_dataSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolverArn"))
  {
    m_resolverArn = jsonValue.GetString("resolverArn");

    m_resolverArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestMappingTemplate"))
  {
    m_requestMappingTemplate = jsonValue.GetString("requestMappingTemplate");

    m_requestMappingTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseMappingTemplate"))
  {
    m_responseMappingTemplate = jsonValue.GetString("responseMappingTemplate");

    m_responseMappingTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kind"))
  {
    m_kind = ResolverKindMapper::GetResolverKindForName(jsonValue.GetString("kind"));

    m_kindHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineConfig"))
  {
    m_pipelineConfig = jsonValue.GetObject("pipelineConfig");

    m_pipelineConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syncConfig"))
  {
    m_syncConfig = jsonValue.GetObject("syncConfig");

    m_syncConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cachingConfig"))
  {
    m_cachingConfig = jsonValue.GetObject("cachingConfig");

    m_cachingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBatchSize"))
  {
    m_maxBatchSize = jsonValue.GetInteger("maxBatchSize");

    m_maxBatchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = jsonValue.GetObject("runtime");

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue Resolver::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("typeName", m_typeName);

  }

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("dataSourceName", m_dataSourceName);

  }

  if(m_resolverArnHasBeenSet)
  {
   payload.WithString("resolverArn", m_resolverArn);

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

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
