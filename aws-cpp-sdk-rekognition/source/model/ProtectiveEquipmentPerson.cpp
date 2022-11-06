/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProtectiveEquipmentPerson.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ProtectiveEquipmentPerson::ProtectiveEquipmentPerson() : 
    m_bodyPartsHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false)
{
}

ProtectiveEquipmentPerson::ProtectiveEquipmentPerson(JsonView jsonValue) : 
    m_bodyPartsHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectiveEquipmentPerson& ProtectiveEquipmentPerson::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BodyParts"))
  {
    Aws::Utils::Array<JsonView> bodyPartsJsonList = jsonValue.GetArray("BodyParts");
    for(unsigned bodyPartsIndex = 0; bodyPartsIndex < bodyPartsJsonList.GetLength(); ++bodyPartsIndex)
    {
      m_bodyParts.push_back(bodyPartsJsonList[bodyPartsIndex].AsObject());
    }
    m_bodyPartsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectiveEquipmentPerson::Jsonize() const
{
  JsonValue payload;

  if(m_bodyPartsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bodyPartsJsonList(m_bodyParts.size());
   for(unsigned bodyPartsIndex = 0; bodyPartsIndex < bodyPartsJsonList.GetLength(); ++bodyPartsIndex)
   {
     bodyPartsJsonList[bodyPartsIndex].AsObject(m_bodyParts[bodyPartsIndex].Jsonize());
   }
   payload.WithArray("BodyParts", std::move(bodyPartsJsonList));

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
