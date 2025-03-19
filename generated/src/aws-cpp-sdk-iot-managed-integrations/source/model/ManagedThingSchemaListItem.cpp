/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ManagedThingSchemaListItem.h>
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

ManagedThingSchemaListItem::ManagedThingSchemaListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedThingSchemaListItem& ManagedThingSchemaListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");
    m_endpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapabilityId"))
  {
    m_capabilityId = jsonValue.GetString("CapabilityId");
    m_capabilityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedThingSchemaListItem::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_capabilityIdHasBeenSet)
  {
   payload.WithString("CapabilityId", m_capabilityId);

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
