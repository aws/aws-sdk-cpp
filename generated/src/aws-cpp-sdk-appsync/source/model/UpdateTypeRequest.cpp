/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/UpdateTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTypeRequest::UpdateTypeRequest() : 
    m_apiIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_format(TypeDefinitionFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

Aws::String UpdateTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", TypeDefinitionFormatMapper::GetNameForTypeDefinitionFormat(m_format));
  }

  return payload.View().WriteReadable();
}




