/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/GetFieldResponse.h>
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

GetFieldResponse::GetFieldResponse() : 
    m_descriptionHasBeenSet(false),
    m_fieldArnHasBeenSet(false),
    m_fieldIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespace(FieldNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

GetFieldResponse::GetFieldResponse(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_fieldArnHasBeenSet(false),
    m_fieldIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespace(FieldNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(FieldType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

GetFieldResponse& GetFieldResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FieldTypeMapper::GetFieldTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue GetFieldResponse::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

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
