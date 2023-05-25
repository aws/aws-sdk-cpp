/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateSensitivityInspectionTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSensitivityInspectionTemplateRequest::UpdateSensitivityInspectionTemplateRequest() : 
    m_descriptionHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_includesHasBeenSet(false)
{
}

Aws::String UpdateSensitivityInspectionTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_excludesHasBeenSet)
  {
   payload.WithObject("excludes", m_excludes.Jsonize());

  }

  if(m_includesHasBeenSet)
  {
   payload.WithObject("includes", m_includes.Jsonize());

  }

  return payload.View().WriteReadable();
}




