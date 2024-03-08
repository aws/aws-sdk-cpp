/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateFormTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFormTypeRequest::CreateFormTypeRequest() : 
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdentifierHasBeenSet(false),
    m_status(FormTypeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String CreateFormTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithObject("model", m_model.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningProjectIdentifierHasBeenSet)
  {
   payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FormTypeStatusMapper::GetNameForFormTypeStatus(m_status));
  }

  return payload.View().WriteReadable();
}




