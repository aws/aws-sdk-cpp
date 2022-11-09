/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

NetworkResource::NetworkResource() : 
    m_attributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_health(HealthStatus::NOT_SET),
    m_healthHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkResourceArnHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_orderArnHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_status(NetworkResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_type(NetworkResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vendorHasBeenSet(false)
{
}

NetworkResource::NetworkResource(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_health(HealthStatus::NOT_SET),
    m_healthHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkResourceArnHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_orderArnHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_status(NetworkResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_type(NetworkResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vendorHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkResource& NetworkResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = HealthStatusMapper::GetHealthStatusForName(jsonValue.GetString("health"));

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkArn"))
  {
    m_networkArn = jsonValue.GetString("networkArn");

    m_networkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkResourceArn"))
  {
    m_networkResourceArn = jsonValue.GetString("networkResourceArn");

    m_networkResourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSiteArn"))
  {
    m_networkSiteArn = jsonValue.GetString("networkSiteArn");

    m_networkSiteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderArn"))
  {
    m_orderArn = jsonValue.GetString("orderArn");

    m_orderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NetworkResourceStatusMapper::GetNetworkResourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = NetworkResourceTypeMapper::GetNetworkResourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendor"))
  {
    m_vendor = jsonValue.GetString("vendor");

    m_vendorHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkResource::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithString("health", HealthStatusMapper::GetNameForHealthStatus(m_health));
  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_networkResourceArnHasBeenSet)
  {
   payload.WithString("networkResourceArn", m_networkResourceArn);

  }

  if(m_networkSiteArnHasBeenSet)
  {
   payload.WithString("networkSiteArn", m_networkSiteArn);

  }

  if(m_orderArnHasBeenSet)
  {
   payload.WithString("orderArn", m_orderArn);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("serialNumber", m_serialNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", NetworkResourceStatusMapper::GetNameForNetworkResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NetworkResourceTypeMapper::GetNameForNetworkResourceType(m_type));
  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("vendor", m_vendor);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
