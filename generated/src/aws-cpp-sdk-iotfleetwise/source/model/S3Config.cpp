/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/S3Config.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

S3Config::S3Config() : 
    m_bucketArnHasBeenSet(false),
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_storageCompressionFormat(StorageCompressionFormat::NOT_SET),
    m_storageCompressionFormatHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

S3Config::S3Config(JsonView jsonValue) : 
    m_bucketArnHasBeenSet(false),
    m_dataFormat(DataFormat::NOT_SET),
    m_dataFormatHasBeenSet(false),
    m_storageCompressionFormat(StorageCompressionFormat::NOT_SET),
    m_storageCompressionFormatHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Config& S3Config::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketArn"))
  {
    m_bucketArn = jsonValue.GetString("bucketArn");

    m_bucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("dataFormat"));

    m_dataFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageCompressionFormat"))
  {
    m_storageCompressionFormat = StorageCompressionFormatMapper::GetStorageCompressionFormatForName(jsonValue.GetString("storageCompressionFormat"));

    m_storageCompressionFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Config::Jsonize() const
{
  JsonValue payload;

  if(m_bucketArnHasBeenSet)
  {
   payload.WithString("bucketArn", m_bucketArn);

  }

  if(m_dataFormatHasBeenSet)
  {
   payload.WithString("dataFormat", DataFormatMapper::GetNameForDataFormat(m_dataFormat));
  }

  if(m_storageCompressionFormatHasBeenSet)
  {
   payload.WithString("storageCompressionFormat", StorageCompressionFormatMapper::GetNameForStorageCompressionFormat(m_storageCompressionFormat));
  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
