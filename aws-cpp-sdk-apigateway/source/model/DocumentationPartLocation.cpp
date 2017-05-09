/*
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

#include <aws/apigateway/model/DocumentationPartLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

DocumentationPartLocation::DocumentationPartLocation() : 
    m_type(DocumentationPartType::NOT_SET),
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

DocumentationPartLocation::DocumentationPartLocation(const JsonValue& jsonValue) : 
    m_type(DocumentationPartType::NOT_SET),
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentationPartLocation& DocumentationPartLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DocumentationPartTypeMapper::GetDocumentationPartTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("method"))
  {
    m_method = jsonValue.GetString("method");

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentationPartLocation::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DocumentationPartTypeMapper::GetNameForDocumentationPartType(m_type));
  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("method", m_method);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws