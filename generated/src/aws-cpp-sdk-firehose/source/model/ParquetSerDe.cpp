/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ParquetSerDe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

ParquetSerDe::ParquetSerDe(JsonView jsonValue)
{
  *this = jsonValue;
}

ParquetSerDe& ParquetSerDe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockSizeBytes"))
  {
    m_blockSizeBytes = jsonValue.GetInteger("BlockSizeBytes");
    m_blockSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PageSizeBytes"))
  {
    m_pageSizeBytes = jsonValue.GetInteger("PageSizeBytes");
    m_pageSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = ParquetCompressionMapper::GetParquetCompressionForName(jsonValue.GetString("Compression"));
    m_compressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableDictionaryCompression"))
  {
    m_enableDictionaryCompression = jsonValue.GetBool("EnableDictionaryCompression");
    m_enableDictionaryCompressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxPaddingBytes"))
  {
    m_maxPaddingBytes = jsonValue.GetInteger("MaxPaddingBytes");
    m_maxPaddingBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WriterVersion"))
  {
    m_writerVersion = ParquetWriterVersionMapper::GetParquetWriterVersionForName(jsonValue.GetString("WriterVersion"));
    m_writerVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ParquetSerDe::Jsonize() const
{
  JsonValue payload;

  if(m_blockSizeBytesHasBeenSet)
  {
   payload.WithInteger("BlockSizeBytes", m_blockSizeBytes);

  }

  if(m_pageSizeBytesHasBeenSet)
  {
   payload.WithInteger("PageSizeBytes", m_pageSizeBytes);

  }

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", ParquetCompressionMapper::GetNameForParquetCompression(m_compression));
  }

  if(m_enableDictionaryCompressionHasBeenSet)
  {
   payload.WithBool("EnableDictionaryCompression", m_enableDictionaryCompression);

  }

  if(m_maxPaddingBytesHasBeenSet)
  {
   payload.WithInteger("MaxPaddingBytes", m_maxPaddingBytes);

  }

  if(m_writerVersionHasBeenSet)
  {
   payload.WithString("WriterVersion", ParquetWriterVersionMapper::GetNameForParquetWriterVersion(m_writerVersion));
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
