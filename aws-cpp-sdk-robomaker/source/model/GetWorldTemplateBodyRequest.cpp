/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/GetWorldTemplateBodyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorldTemplateBodyRequest::GetWorldTemplateBodyRequest() : 
    m_templateHasBeenSet(false),
    m_generationJobHasBeenSet(false)
{
}

Aws::String GetWorldTemplateBodyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  if(m_generationJobHasBeenSet)
  {
   payload.WithString("generationJob", m_generationJob);

  }

  return payload.View().WriteReadable();
}




