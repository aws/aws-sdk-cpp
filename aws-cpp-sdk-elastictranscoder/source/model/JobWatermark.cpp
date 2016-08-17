/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/model/JobWatermark.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

JobWatermark::JobWatermark() : 
    m_presetWatermarkIdHasBeenSet(false),
    m_inputKeyHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

JobWatermark::JobWatermark(const JsonValue& jsonValue) : 
    m_presetWatermarkIdHasBeenSet(false),
    m_inputKeyHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

JobWatermark& JobWatermark::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PresetWatermarkId"))
  {
    m_presetWatermarkId = jsonValue.GetString("PresetWatermarkId");

    m_presetWatermarkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputKey"))
  {
    m_inputKey = jsonValue.GetString("InputKey");

    m_inputKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobWatermark::Jsonize() const
{
  JsonValue payload;

  if(m_presetWatermarkIdHasBeenSet)
  {
   payload.WithString("PresetWatermarkId", m_presetWatermarkId);

  }

  if(m_inputKeyHasBeenSet)
  {
   payload.WithString("InputKey", m_inputKey);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws