/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdatePredefinedAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePredefinedAttributeRequest::UpdatePredefinedAttributeRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

Aws::String UpdatePredefinedAttributeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   payload.WithObject("Values", m_values.Jsonize());

  }

  return payload.View().WriteReadable();
}




