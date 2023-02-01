/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/CaptionSource.h>
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

CaptionSource::CaptionSource() : 
    m_keyHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_timeOffsetHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

CaptionSource::CaptionSource(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_timeOffsetHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionSource& CaptionSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeOffset"))
  {
    m_timeOffset = jsonValue.GetString("TimeOffset");

    m_timeOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionSource::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_timeOffsetHasBeenSet)
  {
   payload.WithString("TimeOffset", m_timeOffset);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

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
