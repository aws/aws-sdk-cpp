/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DocumentationPartLocation::DocumentationPartLocation(JsonView jsonValue) : 
    m_type(DocumentationPartType::NOT_SET),
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentationPartLocation& DocumentationPartLocation::operator =(JsonView jsonValue)
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
