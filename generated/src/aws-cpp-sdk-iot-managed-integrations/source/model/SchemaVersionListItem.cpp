/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SchemaVersionListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

SchemaVersionListItem::SchemaVersionListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaVersionListItem& SchemaVersionListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetString("SchemaId");
    m_schemaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SchemaVersionTypeMapper::GetSchemaVersionTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SemanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("SemanticVersion");
    m_semanticVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = SchemaVersionVisibilityMapper::GetSchemaVersionVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaVersionListItem::Jsonize() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithString("SchemaId", m_schemaId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SchemaVersionTypeMapper::GetNameForSchemaVersionType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("SemanticVersion", m_semanticVersion);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", SchemaVersionVisibilityMapper::GetNameForSchemaVersionVisibility(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
