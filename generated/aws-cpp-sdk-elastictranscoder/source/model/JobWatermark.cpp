/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

JobWatermark::JobWatermark(JsonView jsonValue) : 
    m_presetWatermarkIdHasBeenSet(false),
    m_inputKeyHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

JobWatermark& JobWatermark::operator =(JsonView jsonValue)
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
