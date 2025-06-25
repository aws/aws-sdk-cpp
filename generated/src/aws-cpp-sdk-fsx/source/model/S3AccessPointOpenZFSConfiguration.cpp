/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/S3AccessPointOpenZFSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

S3AccessPointOpenZFSConfiguration::S3AccessPointOpenZFSConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3AccessPointOpenZFSConfiguration& S3AccessPointOpenZFSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");
    m_volumeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSystemIdentity"))
  {
    m_fileSystemIdentity = jsonValue.GetObject("FileSystemIdentity");
    m_fileSystemIdentityHasBeenSet = true;
  }
  return *this;
}

JsonValue S3AccessPointOpenZFSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_fileSystemIdentityHasBeenSet)
  {
   payload.WithObject("FileSystemIdentity", m_fileSystemIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
