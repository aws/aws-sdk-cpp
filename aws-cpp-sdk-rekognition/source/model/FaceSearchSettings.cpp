/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

FaceSearchSettings::FaceSearchSettings(const JsonValue& jsonValue) : 
    m_collectionIdHasBeenSet(false),
    m_faceMatchThreshold(0.0),
    m_faceMatchThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

FaceSearchSettings& FaceSearchSettings::operator =(const JsonValue& jsonValue)
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
