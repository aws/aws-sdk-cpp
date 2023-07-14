/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/CaptionFormat.h>
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

CaptionFormat::CaptionFormat() : 
    m_formatHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

CaptionFormat::CaptionFormat(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionFormat& CaptionFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pattern"))
  {
    m_pattern = jsonValue.GetString("Pattern");

    m_patternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionFormat::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", m_pattern);

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
