/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateFunctionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFunctionRequest::CreateFunctionRequest() : 
    m_apiIdHasBeenSet(false),
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

Aws::String CreateFunctionRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




