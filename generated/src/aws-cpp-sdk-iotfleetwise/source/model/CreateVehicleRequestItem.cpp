/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateVehicleRequestItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CreateVehicleRequestItem::CreateVehicleRequestItem() : 
    m_vehicleNameHasBeenSet(false),
    m_modelManifestArnHasBeenSet(false),
    m_decoderManifestArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_associationBehavior(VehicleAssociationBehavior::NOT_SET),
    m_associationBehaviorHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CreateVehicleRequestItem::CreateVehicleRequestItem(JsonView jsonValue) : 
    m_vehicleNameHasBeenSet(false),
    m_modelManifestArnHasBeenSet(false),
    m_decoderManifestArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_associationBehavior(VehicleAssociationBehavior::NOT_SET),
    m_associationBehaviorHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateVehicleRequestItem& CreateVehicleRequestItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vehicleName"))
  {
    m_vehicleName = jsonValue.GetString("vehicleName");

    m_vehicleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelManifestArn"))
  {
    m_modelManifestArn = jsonValue.GetString("modelManifestArn");

    m_modelManifestArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decoderManifestArn"))
  {
    m_decoderManifestArn = jsonValue.GetString("decoderManifestArn");

    m_decoderManifestArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationBehavior"))
  {
    m_associationBehavior = VehicleAssociationBehaviorMapper::GetVehicleAssociationBehaviorForName(jsonValue.GetString("associationBehavior"));

    m_associationBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateVehicleRequestItem::Jsonize() const
{
  JsonValue payload;

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  if(m_modelManifestArnHasBeenSet)
  {
   payload.WithString("modelManifestArn", m_modelManifestArn);

  }

  if(m_decoderManifestArnHasBeenSet)
  {
   payload.WithString("decoderManifestArn", m_decoderManifestArn);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_associationBehaviorHasBeenSet)
  {
   payload.WithString("associationBehavior", VehicleAssociationBehaviorMapper::GetNameForVehicleAssociationBehavior(m_associationBehavior));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
