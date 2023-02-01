/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateFieldRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFieldRequest::CreateFieldRequest() : 
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateFieldRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FieldTypeMapper::GetNameForFieldType(m_type));
  }

  return payload.View().WriteReadable();
}




