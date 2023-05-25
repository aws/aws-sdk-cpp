/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/VolumeDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

VolumeDetail::VolumeDetail() : 
    m_volumeArnHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

VolumeDetail::VolumeDetail(JsonView jsonValue) : 
    m_volumeArnHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_snapshotArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeDetail& VolumeDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeArn"))
  {
    m_volumeArn = jsonValue.GetString("volumeArn");

    m_volumeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = jsonValue.GetString("volumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("volumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = jsonValue.GetString("encryptionType");

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotArn"))
  {
    m_snapshotArn = jsonValue.GetString("snapshotArn");

    m_snapshotArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeDetail::Jsonize() const
{
  JsonValue payload;

  if(m_volumeArnHasBeenSet)
  {
   payload.WithString("volumeArn", m_volumeArn);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", m_volumeType);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("volumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", m_encryptionType);

  }

  if(m_snapshotArnHasBeenSet)
  {
   payload.WithString("snapshotArn", m_snapshotArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
