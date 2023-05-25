/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/FunctionConfiguration.h>
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

FunctionConfiguration::FunctionConfiguration() : 
    m_functionIdHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_requestMappingTemplateHasBeenSet(false),
    m_responseMappingTemplateHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_syncConfigHasBeenSet(false),
    m_maxBatchSize(0),
    m_maxBatchSizeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

FunctionConfiguration::FunctionConfiguration(JsonView jsonValue) : 
    m_functionIdHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_requestMappingTemplateHasBeenSet(false),
    m_responseMappingTemplateHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_syncConfigHasBeenSet(false),
    m_maxBatchSize(0),
    m_maxBatchSizeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfiguration& FunctionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionId"))
  {
    m_functionId = jsonValue.GetString("functionId");

    m_functionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionArn"))
  {
    m_functionArn = jsonValue.GetString("functionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceName"))
  {
    m_dataSourceName = jsonValue.GetString("dataSourceName");

    m_dataSourceNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("functionVersion"))
  {
    m_functionVersion = jsonValue.GetString("functionVersion");

    m_functionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syncConfig"))
  {
    m_syncConfig = jsonValue.GetObject("syncConfig");

    m_syncConfigHasBeenSet = true;
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

JsonValue FunctionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_functionIdHasBeenSet)
  {
   payload.WithString("functionId", m_functionId);

  }

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("functionArn", m_functionArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_functionVersionHasBeenSet)
  {
   payload.WithString("functionVersion", m_functionVersion);

  }

  if(m_syncConfigHasBeenSet)
  {
   payload.WithObject("syncConfig", m_syncConfig.Jsonize());

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
