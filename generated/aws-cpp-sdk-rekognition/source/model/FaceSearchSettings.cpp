/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/FaceSearchSettings.h>
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

FaceSearchSettings::FaceSearchSettings() : 
    m_collectionIdHasBeenSet(false),
    m_faceMatchThreshold(0.0),
    m_faceMatchThresholdHasBeenSet(false)
{
}

FaceSearchSettings::FaceSearchSettings(JsonView jsonValue) : 
    m_collectionIdHasBeenSet(false),
    m_faceMatchThreshold(0.0),
    m_faceMatchThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

FaceSearchSettings& FaceSearchSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CollectionId"))
  {
    m_collectionId = jsonValue.GetString("CollectionId");

    m_collectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaceMatchThreshold"))
  {
    m_faceMatchThreshold = jsonValue.GetDouble("FaceMatchThreshold");

    m_faceMatchThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue FaceSearchSettings::Jsonize() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_faceMatchThresholdHasBeenSet)
  {
   payload.WithDouble("FaceMatchThreshold", m_faceMatchThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
