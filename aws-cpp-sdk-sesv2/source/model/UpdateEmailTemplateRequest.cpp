/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/UpdateEmailTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEmailTemplateRequest::UpdateEmailTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_templateContentHasBeenSet(false)
{
}

Aws::String UpdateEmailTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateContentHasBeenSet)
  {
   payload.WithObject("TemplateContent", m_templateContent.Jsonize());

  }

  return payload.View().WriteReadable();
}




