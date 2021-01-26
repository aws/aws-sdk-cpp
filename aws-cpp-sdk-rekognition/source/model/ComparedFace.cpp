/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ComparedFace.h>
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

ComparedFace::ComparedFace() : 
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_landmarksHasBeenSet(false),
    m_poseHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
}

ComparedFace::ComparedFace(JsonView jsonValue) : 
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_landmarksHasBeenSet(false),
    m_poseHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
  *this = jsonValue;
}

ComparedFace& ComparedFace::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("Landmarks"))
  {
    Array<JsonView> landmarksJsonList = jsonValue.GetArray("Landmarks");
    for(unsigned landmarksIndex = 0; landmarksIndex < landmarksJsonList.GetLength(); ++landmarksIndex)
    {
      m_landmarks.push_back(landmarksJsonList[landmarksIndex].AsObject());
    }
    m_landmarksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pose"))
  {
    m_pose = jsonValue.GetObject("Pose");

    m_poseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Quality"))
  {
    m_quality = jsonValue.GetObject("Quality");

    m_qualityHasBeenSet = true;
  }

  return *this;
}

JsonValue ComparedFace::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_landmarksHasBeenSet)
  {
   Array<JsonValue> landmarksJsonList(m_landmarks.size());
   for(unsigned landmarksIndex = 0; landmarksIndex < landmarksJsonList.GetLength(); ++landmarksIndex)
   {
     landmarksJsonList[landmarksIndex].AsObject(m_landmarks[landmarksIndex].Jsonize());
   }
   payload.WithArray("Landmarks", std::move(landmarksJsonList));

  }

  if(m_poseHasBeenSet)
  {
   payload.WithObject("Pose", m_pose.Jsonize());

  }

  if(m_qualityHasBeenSet)
  {
   payload.WithObject("Quality", m_quality.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
