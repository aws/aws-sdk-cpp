/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateVehicleRequestItem.h>
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

UpdateVehicleRequestItem::UpdateVehicleRequestItem() : 
    m_vehicleNameHasBeenSet(false),
    m_modelManifestArnHasBeenSet(false),
    m_decoderManifestArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_attributeUpdateMode(UpdateMode::NOT_SET),
    m_attributeUpdateModeHasBeenSet(false)
{
}

UpdateVehicleRequestItem::UpdateVehicleRequestItem(JsonView jsonValue) : 
    m_vehicleNameHasBeenSet(false),
    m_modelManifestArnHasBeenSet(false),
    m_decoderManifestArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_attributeUpdateMode(UpdateMode::NOT_SET),
    m_attributeUpdateModeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateVehicleRequestItem& UpdateVehicleRequestItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("attributeUpdateMode"))
  {
    m_attributeUpdateMode = UpdateModeMapper::GetUpdateModeForName(jsonValue.GetString("attributeUpdateMode"));

    m_attributeUpdateModeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateVehicleRequestItem::Jsonize() const
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

  if(m_attributeUpdateModeHasBeenSet)
  {
   payload.WithString("attributeUpdateMode", UpdateModeMapper::GetNameForUpdateMode(m_attributeUpdateMode));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
