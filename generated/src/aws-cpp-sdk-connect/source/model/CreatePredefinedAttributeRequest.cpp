/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreatePredefinedAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePredefinedAttributeRequest::CreatePredefinedAttributeRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

Aws::String CreatePredefinedAttributeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valuesHasBeenSet)
  {
   payload.WithObject("Values", m_values.Jsonize());

  }

  return payload.View().WriteReadable();
}




