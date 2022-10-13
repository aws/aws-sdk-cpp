/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTemplateRequest::CreateTemplateRequest() : 
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_layoutConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiredFieldsHasBeenSet(false)
{
}

Aws::String CreateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_layoutConfigurationHasBeenSet)
  {
   payload.WithObject("layoutConfiguration", m_layoutConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requiredFieldsHasBeenSet)
  {
   Array<JsonValue> requiredFieldsJsonList(m_requiredFields.size());
   for(unsigned requiredFieldsIndex = 0; requiredFieldsIndex < requiredFieldsJsonList.GetLength(); ++requiredFieldsIndex)
   {
     requiredFieldsJsonList[requiredFieldsIndex].AsObject(m_requiredFields[requiredFieldsIndex].Jsonize());
   }
   payload.WithArray("requiredFields", std::move(requiredFieldsJsonList));

  }

  return payload.View().WriteReadable();
}




