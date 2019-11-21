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
    m_cachingConfigHasBeenSet(false)
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
    m_cachingConfigHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
