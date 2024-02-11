/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UpdateCalculatedAttributeDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCalculatedAttributeDefinitionRequest::UpdateCalculatedAttributeDefinitionRequest() : 
    m_domainNameHasBeenSet(false),
    m_calculatedAttributeNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

Aws::String UpdateCalculatedAttributeDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_conditionsHasBeenSet)
  {
   payload.WithObject("Conditions", m_conditions.Jsonize());

  }

  return payload.View().WriteReadable();
}




