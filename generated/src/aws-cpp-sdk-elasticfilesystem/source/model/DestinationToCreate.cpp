/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DestinationToCreate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

DestinationToCreate::DestinationToCreate() : 
    m_regionHasBeenSet(false),
    m_availabilityZoneNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

DestinationToCreate::DestinationToCreate(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_availabilityZoneNameHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationToCreate& DestinationToCreate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZoneName"))
  {
    m_availabilityZoneName = jsonValue.GetString("AvailabilityZoneName");

    m_availabilityZoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationToCreate::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_availabilityZoneNameHasBeenSet)
  {
   payload.WithString("AvailabilityZoneName", m_availabilityZoneName);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
