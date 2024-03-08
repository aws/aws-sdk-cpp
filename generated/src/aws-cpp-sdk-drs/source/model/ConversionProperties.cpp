/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ConversionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

ConversionProperties::ConversionProperties() : 
    m_dataTimestampHasBeenSet(false),
    m_forceUefi(false),
    m_forceUefiHasBeenSet(false),
    m_rootVolumeNameHasBeenSet(false),
    m_volumeToConversionMapHasBeenSet(false),
    m_volumeToProductCodesHasBeenSet(false),
    m_volumeToVolumeSizeHasBeenSet(false)
{
}

ConversionProperties::ConversionProperties(JsonView jsonValue) : 
    m_dataTimestampHasBeenSet(false),
    m_forceUefi(false),
    m_forceUefiHasBeenSet(false),
    m_rootVolumeNameHasBeenSet(false),
    m_volumeToConversionMapHasBeenSet(false),
    m_volumeToProductCodesHasBeenSet(false),
    m_volumeToVolumeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

ConversionProperties& ConversionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTimestamp"))
  {
    m_dataTimestamp = jsonValue.GetString("dataTimestamp");

    m_dataTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forceUefi"))
  {
    m_forceUefi = jsonValue.GetBool("forceUefi");

    m_forceUefiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootVolumeName"))
  {
    m_rootVolumeName = jsonValue.GetString("rootVolumeName");

    m_rootVolumeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeToConversionMap"))
  {
    Aws::Map<Aws::String, JsonView> volumeToConversionMapJsonMap = jsonValue.GetObject("volumeToConversionMap").GetAllObjects();
    for(auto& volumeToConversionMapItem : volumeToConversionMapJsonMap)
    {
      Aws::Map<Aws::String, JsonView> conversionMapJsonMap = volumeToConversionMapItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> conversionMapMap;
      for(auto& conversionMapItem : conversionMapJsonMap)
      {
        conversionMapMap[conversionMapItem.first] = conversionMapItem.second.AsString();
      }
      m_volumeToConversionMap[volumeToConversionMapItem.first] = std::move(conversionMapMap);
    }
    m_volumeToConversionMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeToProductCodes"))
  {
    Aws::Map<Aws::String, JsonView> volumeToProductCodesJsonMap = jsonValue.GetObject("volumeToProductCodes").GetAllObjects();
    for(auto& volumeToProductCodesItem : volumeToProductCodesJsonMap)
    {
      Aws::Utils::Array<JsonView> productCodesJsonList = volumeToProductCodesItem.second.AsArray();
      Aws::Vector<ProductCode> productCodesList;
      productCodesList.reserve((size_t)productCodesJsonList.GetLength());
      for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
      {
        productCodesList.push_back(productCodesJsonList[productCodesIndex].AsObject());
      }
      m_volumeToProductCodes[volumeToProductCodesItem.first] = std::move(productCodesList);
    }
    m_volumeToProductCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeToVolumeSize"))
  {
    Aws::Map<Aws::String, JsonView> volumeToVolumeSizeJsonMap = jsonValue.GetObject("volumeToVolumeSize").GetAllObjects();
    for(auto& volumeToVolumeSizeItem : volumeToVolumeSizeJsonMap)
    {
      m_volumeToVolumeSize[volumeToVolumeSizeItem.first] = volumeToVolumeSizeItem.second.AsInt64();
    }
    m_volumeToVolumeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_dataTimestampHasBeenSet)
  {
   payload.WithString("dataTimestamp", m_dataTimestamp);

  }

  if(m_forceUefiHasBeenSet)
  {
   payload.WithBool("forceUefi", m_forceUefi);

  }

  if(m_rootVolumeNameHasBeenSet)
  {
   payload.WithString("rootVolumeName", m_rootVolumeName);

  }

  if(m_volumeToConversionMapHasBeenSet)
  {
   JsonValue volumeToConversionMapJsonMap;
   for(auto& volumeToConversionMapItem : m_volumeToConversionMap)
   {
     JsonValue conversionMapJsonMap;
     for(auto& conversionMapItem : volumeToConversionMapItem.second)
     {
       conversionMapJsonMap.WithString(conversionMapItem.first, conversionMapItem.second);
     }
     volumeToConversionMapJsonMap.WithObject(volumeToConversionMapItem.first, std::move(conversionMapJsonMap));
   }
   payload.WithObject("volumeToConversionMap", std::move(volumeToConversionMapJsonMap));

  }

  if(m_volumeToProductCodesHasBeenSet)
  {
   JsonValue volumeToProductCodesJsonMap;
   for(auto& volumeToProductCodesItem : m_volumeToProductCodes)
   {
     Aws::Utils::Array<JsonValue> productCodesJsonList(volumeToProductCodesItem.second.size());
     for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
     {
       productCodesJsonList[productCodesIndex].AsObject(volumeToProductCodesItem.second[productCodesIndex].Jsonize());
     }
     volumeToProductCodesJsonMap.WithArray(volumeToProductCodesItem.first, std::move(productCodesJsonList));
   }
   payload.WithObject("volumeToProductCodes", std::move(volumeToProductCodesJsonMap));

  }

  if(m_volumeToVolumeSizeHasBeenSet)
  {
   JsonValue volumeToVolumeSizeJsonMap;
   for(auto& volumeToVolumeSizeItem : m_volumeToVolumeSize)
   {
     volumeToVolumeSizeJsonMap.WithInt64(volumeToVolumeSizeItem.first, volumeToVolumeSizeItem.second);
   }
   payload.WithObject("volumeToVolumeSize", std::move(volumeToVolumeSizeJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
