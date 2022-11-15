/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/FaceDetail.h>
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

FaceDetail::FaceDetail() : 
    m_boundingBoxHasBeenSet(false),
    m_ageRangeHasBeenSet(false),
    m_smileHasBeenSet(false),
    m_eyeglassesHasBeenSet(false),
    m_sunglassesHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_beardHasBeenSet(false),
    m_mustacheHasBeenSet(false),
    m_eyesOpenHasBeenSet(false),
    m_mouthOpenHasBeenSet(false),
    m_emotionsHasBeenSet(false),
    m_landmarksHasBeenSet(false),
    m_poseHasBeenSet(false),
    m_qualityHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

FaceDetail::FaceDetail(JsonView jsonValue) : 
    m_boundingBoxHasBeenSet(false),
    m_ageRangeHasBeenSet(false),
    m_smileHasBeenSet(false),
    m_eyeglassesHasBeenSet(false),
    m_sunglassesHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_beardHasBeenSet(false),
    m_mustacheHasBeenSet(false),
    m_eyesOpenHasBeenSet(false),
    m_mouthOpenHasBeenSet(false),
    m_emotionsHasBeenSet(false),
    m_landmarksHasBeenSet(false),
    m_poseHasBeenSet(false),
    m_qualityHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

FaceDetail& FaceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgeRange"))
  {
    m_ageRange = jsonValue.GetObject("AgeRange");

    m_ageRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Smile"))
  {
    m_smile = jsonValue.GetObject("Smile");

    m_smileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Eyeglasses"))
  {
    m_eyeglasses = jsonValue.GetObject("Eyeglasses");

    m_eyeglassesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sunglasses"))
  {
    m_sunglasses = jsonValue.GetObject("Sunglasses");

    m_sunglassesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gender"))
  {
    m_gender = jsonValue.GetObject("Gender");

    m_genderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Beard"))
  {
    m_beard = jsonValue.GetObject("Beard");

    m_beardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mustache"))
  {
    m_mustache = jsonValue.GetObject("Mustache");

    m_mustacheHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EyesOpen"))
  {
    m_eyesOpen = jsonValue.GetObject("EyesOpen");

    m_eyesOpenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MouthOpen"))
  {
    m_mouthOpen = jsonValue.GetObject("MouthOpen");

    m_mouthOpenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Emotions"))
  {
    Aws::Utils::Array<JsonView> emotionsJsonList = jsonValue.GetArray("Emotions");
    for(unsigned emotionsIndex = 0; emotionsIndex < emotionsJsonList.GetLength(); ++emotionsIndex)
    {
      m_emotions.push_back(emotionsJsonList[emotionsIndex].AsObject());
    }
    m_emotionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Landmarks"))
  {
    Aws::Utils::Array<JsonView> landmarksJsonList = jsonValue.GetArray("Landmarks");
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

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue FaceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_ageRangeHasBeenSet)
  {
   payload.WithObject("AgeRange", m_ageRange.Jsonize());

  }

  if(m_smileHasBeenSet)
  {
   payload.WithObject("Smile", m_smile.Jsonize());

  }

  if(m_eyeglassesHasBeenSet)
  {
   payload.WithObject("Eyeglasses", m_eyeglasses.Jsonize());

  }

  if(m_sunglassesHasBeenSet)
  {
   payload.WithObject("Sunglasses", m_sunglasses.Jsonize());

  }

  if(m_genderHasBeenSet)
  {
   payload.WithObject("Gender", m_gender.Jsonize());

  }

  if(m_beardHasBeenSet)
  {
   payload.WithObject("Beard", m_beard.Jsonize());

  }

  if(m_mustacheHasBeenSet)
  {
   payload.WithObject("Mustache", m_mustache.Jsonize());

  }

  if(m_eyesOpenHasBeenSet)
  {
   payload.WithObject("EyesOpen", m_eyesOpen.Jsonize());

  }

  if(m_mouthOpenHasBeenSet)
  {
   payload.WithObject("MouthOpen", m_mouthOpen.Jsonize());

  }

  if(m_emotionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emotionsJsonList(m_emotions.size());
   for(unsigned emotionsIndex = 0; emotionsIndex < emotionsJsonList.GetLength(); ++emotionsIndex)
   {
     emotionsJsonList[emotionsIndex].AsObject(m_emotions[emotionsIndex].Jsonize());
   }
   payload.WithArray("Emotions", std::move(emotionsJsonList));

  }

  if(m_landmarksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> landmarksJsonList(m_landmarks.size());
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

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
