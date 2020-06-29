/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UpdateVariableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVariableRequest::UpdateVariableRequest() : 
    m_nameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_variableTypeHasBeenSet(false)
{
}

Aws::String UpdateVariableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_variableTypeHasBeenSet)
  {
   payload.WithString("variableType", m_variableType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVariableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateVariable"));
  return headers;

}




