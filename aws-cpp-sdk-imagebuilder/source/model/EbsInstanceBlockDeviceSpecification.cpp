/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/EbsInstanceBlockDeviceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

EbsInstanceBlockDeviceSpecification::EbsInstanceBlockDeviceSpecification() : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(EbsVolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
}

EbsInstanceBlockDeviceSpecification::EbsInstanceBlockDeviceSpecification(JsonView jsonValue) : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(EbsVolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EbsInstanceBlockDeviceSpecification& EbsInstanceBlockDeviceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("deleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInteger("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotId"))
  {
    m_snapshotId = jsonValue.GetString("snapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("volumeSize");

    m_volumeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = EbsVolumeTypeMapper::GetEbsVolumeTypeForName(jsonValue.GetString("volumeType"));

    m_volumeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsInstanceBlockDeviceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("deleteOnTermination", m_deleteOnTermination);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("iops", m_iops);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("snapshotId", m_snapshotId);

  }

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("volumeSize", m_volumeSize);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", EbsVolumeTypeMapper::GetNameForEbsVolumeType(m_volumeType));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
