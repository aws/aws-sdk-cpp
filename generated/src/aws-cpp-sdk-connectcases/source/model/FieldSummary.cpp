/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

FieldSummary::FieldSummary() : 
    m_fieldArnHasBeenSet(false),
    m_fieldIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespace(FieldNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

FieldSummary::FieldSummary(JsonView jsonValue) : 
    m_fieldArnHasBeenSet(false),
    m_fieldIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespace(FieldNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

FieldSummary& FieldSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldArn"))
  {
    m_fieldArn = jsonValue.GetString("fieldArn");

    m_fieldArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = FieldNamespaceMapper::GetFieldNamespaceForName(jsonValue.GetString("namespace"));

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FieldTypeMapper::GetFieldTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldSummary::Jsonize() const
{
  JsonValue payload;

  if(m_fieldArnHasBeenSet)
  {
   payload.WithString("fieldArn", m_fieldArn);

  }

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("fieldId", m_fieldId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", FieldNamespaceMapper::GetNameForFieldNamespace(m_namespace));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FieldTypeMapper::GetNameForFieldType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
