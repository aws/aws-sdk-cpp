/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EvaluateMappingTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EvaluateMappingTemplateRequest::EvaluateMappingTemplateRequest() : 
    m_templateHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

Aws::String EvaluateMappingTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  return payload.View().WriteReadable();
}




