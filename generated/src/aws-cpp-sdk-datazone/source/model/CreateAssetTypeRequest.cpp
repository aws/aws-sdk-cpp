/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateAssetTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetTypeRequest::CreateAssetTypeRequest() : 
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_formsInputHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdentifierHasBeenSet(false)
{
}

Aws::String CreateAssetTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_formsInputHasBeenSet)
  {
   JsonValue formsInputJsonMap;
   for(auto& formsInputItem : m_formsInput)
   {
     formsInputJsonMap.WithObject(formsInputItem.first, formsInputItem.second.Jsonize());
   }
   payload.WithObject("formsInput", std::move(formsInputJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningProjectIdentifierHasBeenSet)
  {
   payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);

  }

  return payload.View().WriteReadable();
}




