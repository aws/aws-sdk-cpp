/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceStorageConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

InstanceStorageConfig::InstanceStorageConfig() : 
    m_associationIdHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_s3ConfigHasBeenSet(false),
    m_kinesisVideoStreamConfigHasBeenSet(false),
    m_kinesisStreamConfigHasBeenSet(false),
    m_kinesisFirehoseConfigHasBeenSet(false)
{
}

InstanceStorageConfig::InstanceStorageConfig(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_s3ConfigHasBeenSet(false),
    m_kinesisVideoStreamConfigHasBeenSet(false),
    m_kinesisStreamConfigHasBeenSet(false),
    m_kinesisFirehoseConfigHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceStorageConfig& InstanceStorageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Config"))
  {
    m_s3Config = jsonValue.GetObject("S3Config");

    m_s3ConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisVideoStreamConfig"))
  {
    m_kinesisVideoStreamConfig = jsonValue.GetObject("KinesisVideoStreamConfig");

    m_kinesisVideoStreamConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamConfig"))
  {
    m_kinesisStreamConfig = jsonValue.GetObject("KinesisStreamConfig");

    m_kinesisStreamConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseConfig"))
  {
    m_kinesisFirehoseConfig = jsonValue.GetObject("KinesisFirehoseConfig");

    m_kinesisFirehoseConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceStorageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("S3Config", m_s3Config.Jsonize());

  }

  if(m_kinesisVideoStreamConfigHasBeenSet)
  {
   payload.WithObject("KinesisVideoStreamConfig", m_kinesisVideoStreamConfig.Jsonize());

  }

  if(m_kinesisStreamConfigHasBeenSet)
  {
   payload.WithObject("KinesisStreamConfig", m_kinesisStreamConfig.Jsonize());

  }

  if(m_kinesisFirehoseConfigHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseConfig", m_kinesisFirehoseConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
