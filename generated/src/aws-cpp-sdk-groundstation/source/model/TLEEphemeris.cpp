/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/TLEEphemeris.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

TLEEphemeris::TLEEphemeris() : 
    m_s3ObjectHasBeenSet(false),
    m_tleDataHasBeenSet(false)
{
}

TLEEphemeris::TLEEphemeris(JsonView jsonValue) : 
    m_s3ObjectHasBeenSet(false),
    m_tleDataHasBeenSet(false)
{
  *this = jsonValue;
}

TLEEphemeris& TLEEphemeris::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Object"))
  {
    m_s3Object = jsonValue.GetObject("s3Object");

    m_s3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tleData"))
  {
    Aws::Utils::Array<JsonView> tleDataJsonList = jsonValue.GetArray("tleData");
    for(unsigned tleDataIndex = 0; tleDataIndex < tleDataJsonList.GetLength(); ++tleDataIndex)
    {
      m_tleData.push_back(tleDataJsonList[tleDataIndex].AsObject());
    }
    m_tleDataHasBeenSet = true;
  }

  return *this;
}

JsonValue TLEEphemeris::Jsonize() const
{
  JsonValue payload;

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("s3Object", m_s3Object.Jsonize());

  }

  if(m_tleDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tleDataJsonList(m_tleData.size());
   for(unsigned tleDataIndex = 0; tleDataIndex < tleDataJsonList.GetLength(); ++tleDataIndex)
   {
     tleDataJsonList[tleDataIndex].AsObject(m_tleData[tleDataIndex].Jsonize());
   }
   payload.WithArray("tleData", std::move(tleDataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
