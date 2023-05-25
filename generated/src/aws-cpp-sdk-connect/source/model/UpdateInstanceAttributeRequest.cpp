/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateInstanceAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInstanceAttributeRequest::UpdateInstanceAttributeRequest() : 
    m_instanceIdHasBeenSet(false),
    m_attributeType(InstanceAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Aws::String UpdateInstanceAttributeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload.View().WriteReadable();
}




