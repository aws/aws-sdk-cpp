﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}




