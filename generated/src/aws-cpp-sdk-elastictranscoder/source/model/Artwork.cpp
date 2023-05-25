/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/Artwork.h>
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

Artwork::Artwork() : 
    m_inputKeyHasBeenSet(false),
    m_maxWidthHasBeenSet(false),
    m_maxHeightHasBeenSet(false),
    m_sizingPolicyHasBeenSet(false),
    m_paddingPolicyHasBeenSet(false),
    m_albumArtFormatHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

Artwork::Artwork(JsonView jsonValue) : 
    m_inputKeyHasBeenSet(false),
    m_maxWidthHasBeenSet(false),
    m_maxHeightHasBeenSet(false),
    m_sizingPolicyHasBeenSet(false),
    m_paddingPolicyHasBeenSet(false),
    m_albumArtFormatHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

Artwork& Artwork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputKey"))
  {
    m_inputKey = jsonValue.GetString("InputKey");

    m_inputKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxWidth"))
  {
    m_maxWidth = jsonValue.GetString("MaxWidth");

    m_maxWidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxHeight"))
  {
    m_maxHeight = jsonValue.GetString("MaxHeight");

    m_maxHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizingPolicy"))
  {
    m_sizingPolicy = jsonValue.GetString("SizingPolicy");

    m_sizingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaddingPolicy"))
  {
    m_paddingPolicy = jsonValue.GetString("PaddingPolicy");

    m_paddingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlbumArtFormat"))
  {
    m_albumArtFormat = jsonValue.GetString("AlbumArtFormat");

    m_albumArtFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Artwork::Jsonize() const
{
  JsonValue payload;

  if(m_inputKeyHasBeenSet)
  {
   payload.WithString("InputKey", m_inputKey);

  }

  if(m_maxWidthHasBeenSet)
  {
   payload.WithString("MaxWidth", m_maxWidth);

  }

  if(m_maxHeightHasBeenSet)
  {
   payload.WithString("MaxHeight", m_maxHeight);

  }

  if(m_sizingPolicyHasBeenSet)
  {
   payload.WithString("SizingPolicy", m_sizingPolicy);

  }

  if(m_paddingPolicyHasBeenSet)
  {
   payload.WithString("PaddingPolicy", m_paddingPolicy);

  }

  if(m_albumArtFormatHasBeenSet)
  {
   payload.WithString("AlbumArtFormat", m_albumArtFormat);

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
