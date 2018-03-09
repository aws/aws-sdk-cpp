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

#include <aws/rekognition/model/StreamProcessorSettings.h>
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

StreamProcessorSettings::StreamProcessorSettings() : 
    m_faceSearchHasBeenSet(false)
{
}

StreamProcessorSettings::StreamProcessorSettings(const JsonValue& jsonValue) : 
    m_faceSearchHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorSettings& StreamProcessorSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FaceSearch"))
  {
    m_faceSearch = jsonValue.GetObject("FaceSearch");

    m_faceSearchHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_faceSearchHasBeenSet)
  {
   payload.WithObject("FaceSearch", m_faceSearch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
