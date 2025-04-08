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

UpdateVehicleRequestItem::UpdateVehicleRequestItem(JsonView jsonValue)
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
  if(jsonValue.ValueExists("stateTemplatesToAdd"))
  {
    Aws::Utils::Array<JsonView> stateTemplatesToAddJsonList = jsonValue.GetArray("stateTemplatesToAdd");
    for(unsigned stateTemplatesToAddIndex = 0; stateTemplatesToAddIndex < stateTemplatesToAddJsonList.GetLength(); ++stateTemplatesToAddIndex)
    {
      m_stateTemplatesToAdd.push_back(stateTemplatesToAddJsonList[stateTemplatesToAddIndex].AsObject());
    }
    m_stateTemplatesToAddHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateTemplatesToRemove"))
  {
    Aws::Utils::Array<JsonView> stateTemplatesToRemoveJsonList = jsonValue.GetArray("stateTemplatesToRemove");
    for(unsigned stateTemplatesToRemoveIndex = 0; stateTemplatesToRemoveIndex < stateTemplatesToRemoveJsonList.GetLength(); ++stateTemplatesToRemoveIndex)
    {
      m_stateTemplatesToRemove.push_back(stateTemplatesToRemoveJsonList[stateTemplatesToRemoveIndex].AsString());
    }
    m_stateTemplatesToRemoveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateTemplatesToUpdate"))
  {
    Aws::Utils::Array<JsonView> stateTemplatesToUpdateJsonList = jsonValue.GetArray("stateTemplatesToUpdate");
    for(unsigned stateTemplatesToUpdateIndex = 0; stateTemplatesToUpdateIndex < stateTemplatesToUpdateJsonList.GetLength(); ++stateTemplatesToUpdateIndex)
    {
      m_stateTemplatesToUpdate.push_back(stateTemplatesToUpdateJsonList[stateTemplatesToUpdateIndex].AsObject());
    }
    m_stateTemplatesToUpdateHasBeenSet = true;
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

  if(m_stateTemplatesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatesToAddJsonList(m_stateTemplatesToAdd.size());
   for(unsigned stateTemplatesToAddIndex = 0; stateTemplatesToAddIndex < stateTemplatesToAddJsonList.GetLength(); ++stateTemplatesToAddIndex)
   {
     stateTemplatesToAddJsonList[stateTemplatesToAddIndex].AsObject(m_stateTemplatesToAdd[stateTemplatesToAddIndex].Jsonize());
   }
   payload.WithArray("stateTemplatesToAdd", std::move(stateTemplatesToAddJsonList));

  }

  if(m_stateTemplatesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatesToRemoveJsonList(m_stateTemplatesToRemove.size());
   for(unsigned stateTemplatesToRemoveIndex = 0; stateTemplatesToRemoveIndex < stateTemplatesToRemoveJsonList.GetLength(); ++stateTemplatesToRemoveIndex)
   {
     stateTemplatesToRemoveJsonList[stateTemplatesToRemoveIndex].AsString(m_stateTemplatesToRemove[stateTemplatesToRemoveIndex]);
   }
   payload.WithArray("stateTemplatesToRemove", std::move(stateTemplatesToRemoveJsonList));

  }

  if(m_stateTemplatesToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatesToUpdateJsonList(m_stateTemplatesToUpdate.size());
   for(unsigned stateTemplatesToUpdateIndex = 0; stateTemplatesToUpdateIndex < stateTemplatesToUpdateJsonList.GetLength(); ++stateTemplatesToUpdateIndex)
   {
     stateTemplatesToUpdateJsonList[stateTemplatesToUpdateIndex].AsObject(m_stateTemplatesToUpdate[stateTemplatesToUpdateIndex].Jsonize());
   }
   payload.WithArray("stateTemplatesToUpdate", std::move(stateTemplatesToUpdateJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
