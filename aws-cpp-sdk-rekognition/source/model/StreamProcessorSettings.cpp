/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

StreamProcessorSettings::StreamProcessorSettings(JsonView jsonValue) : 
    m_faceSearchHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorSettings& StreamProcessorSettings::operator =(JsonView jsonValue)
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
