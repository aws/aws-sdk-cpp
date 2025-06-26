/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CapabilitySchemaItem.h>
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

CapabilitySchemaItem::CapabilitySchemaItem(JsonView jsonValue)
{
  *this = jsonValue;
}

CapabilitySchemaItem& CapabilitySchemaItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = SchemaVersionFormatMapper::GetSchemaVersionFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapabilityId"))
  {
    m_capabilityId = jsonValue.GetString("CapabilityId");
    m_capabilityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExtrinsicId"))
  {
    m_extrinsicId = jsonValue.GetString("ExtrinsicId");
    m_extrinsicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExtrinsicVersion"))
  {
    m_extrinsicVersion = jsonValue.GetInteger("ExtrinsicVersion");
    m_extrinsicVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilitySchemaItem::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", SchemaVersionFormatMapper::GetNameForSchemaVersionFormat(m_format));
  }

  if(m_capabilityIdHasBeenSet)
  {
   payload.WithString("CapabilityId", m_capabilityId);

  }

  if(m_extrinsicIdHasBeenSet)
  {
   payload.WithString("ExtrinsicId", m_extrinsicId);

  }

  if(m_extrinsicVersionHasBeenSet)
  {
   payload.WithInteger("ExtrinsicVersion", m_extrinsicVersion);

  }

  if(m_schemaHasBeenSet)
  {
    if(!m_schema.View().IsNull())
    {
       payload.WithObject("Schema", JsonValue(m_schema.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
