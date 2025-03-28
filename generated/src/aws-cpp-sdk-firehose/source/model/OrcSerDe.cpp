﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/OrcSerDe.h>
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

OrcSerDe::OrcSerDe(JsonView jsonValue)
{
  *this = jsonValue;
}

OrcSerDe& OrcSerDe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StripeSizeBytes"))
  {
    m_stripeSizeBytes = jsonValue.GetInteger("StripeSizeBytes");
    m_stripeSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockSizeBytes"))
  {
    m_blockSizeBytes = jsonValue.GetInteger("BlockSizeBytes");
    m_blockSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RowIndexStride"))
  {
    m_rowIndexStride = jsonValue.GetInteger("RowIndexStride");
    m_rowIndexStrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnablePadding"))
  {
    m_enablePadding = jsonValue.GetBool("EnablePadding");
    m_enablePaddingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PaddingTolerance"))
  {
    m_paddingTolerance = jsonValue.GetDouble("PaddingTolerance");
    m_paddingToleranceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = OrcCompressionMapper::GetOrcCompressionForName(jsonValue.GetString("Compression"));
    m_compressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BloomFilterColumns"))
  {
    Aws::Utils::Array<JsonView> bloomFilterColumnsJsonList = jsonValue.GetArray("BloomFilterColumns");
    for(unsigned bloomFilterColumnsIndex = 0; bloomFilterColumnsIndex < bloomFilterColumnsJsonList.GetLength(); ++bloomFilterColumnsIndex)
    {
      m_bloomFilterColumns.push_back(bloomFilterColumnsJsonList[bloomFilterColumnsIndex].AsString());
    }
    m_bloomFilterColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BloomFilterFalsePositiveProbability"))
  {
    m_bloomFilterFalsePositiveProbability = jsonValue.GetDouble("BloomFilterFalsePositiveProbability");
    m_bloomFilterFalsePositiveProbabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DictionaryKeyThreshold"))
  {
    m_dictionaryKeyThreshold = jsonValue.GetDouble("DictionaryKeyThreshold");
    m_dictionaryKeyThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FormatVersion"))
  {
    m_formatVersion = OrcFormatVersionMapper::GetOrcFormatVersionForName(jsonValue.GetString("FormatVersion"));
    m_formatVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue OrcSerDe::Jsonize() const
{
  JsonValue payload;

  if(m_stripeSizeBytesHasBeenSet)
  {
   payload.WithInteger("StripeSizeBytes", m_stripeSizeBytes);

  }

  if(m_blockSizeBytesHasBeenSet)
  {
   payload.WithInteger("BlockSizeBytes", m_blockSizeBytes);

  }

  if(m_rowIndexStrideHasBeenSet)
  {
   payload.WithInteger("RowIndexStride", m_rowIndexStride);

  }

  if(m_enablePaddingHasBeenSet)
  {
   payload.WithBool("EnablePadding", m_enablePadding);

  }

  if(m_paddingToleranceHasBeenSet)
  {
   payload.WithDouble("PaddingTolerance", m_paddingTolerance);

  }

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", OrcCompressionMapper::GetNameForOrcCompression(m_compression));
  }

  if(m_bloomFilterColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bloomFilterColumnsJsonList(m_bloomFilterColumns.size());
   for(unsigned bloomFilterColumnsIndex = 0; bloomFilterColumnsIndex < bloomFilterColumnsJsonList.GetLength(); ++bloomFilterColumnsIndex)
   {
     bloomFilterColumnsJsonList[bloomFilterColumnsIndex].AsString(m_bloomFilterColumns[bloomFilterColumnsIndex]);
   }
   payload.WithArray("BloomFilterColumns", std::move(bloomFilterColumnsJsonList));

  }

  if(m_bloomFilterFalsePositiveProbabilityHasBeenSet)
  {
   payload.WithDouble("BloomFilterFalsePositiveProbability", m_bloomFilterFalsePositiveProbability);

  }

  if(m_dictionaryKeyThresholdHasBeenSet)
  {
   payload.WithDouble("DictionaryKeyThreshold", m_dictionaryKeyThreshold);

  }

  if(m_formatVersionHasBeenSet)
  {
   payload.WithString("FormatVersion", OrcFormatVersionMapper::GetNameForOrcFormatVersion(m_formatVersion));
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
