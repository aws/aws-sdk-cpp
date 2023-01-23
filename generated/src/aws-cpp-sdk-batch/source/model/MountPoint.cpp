/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/MountPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

MountPoint::MountPoint() : 
    m_containerPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_sourceVolumeHasBeenSet(false)
{
}

MountPoint::MountPoint(JsonView jsonValue) : 
    m_containerPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_sourceVolumeHasBeenSet(false)
{
  *this = jsonValue;
}

MountPoint& MountPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerPath"))
  {
    m_containerPath = jsonValue.GetString("containerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVolume"))
  {
    m_sourceVolume = jsonValue.GetString("sourceVolume");

    m_sourceVolumeHasBeenSet = true;
  }

  return *this;
}

JsonValue MountPoint::Jsonize() const
{
  JsonValue payload;

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("containerPath", m_containerPath);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("readOnly", m_readOnly);

  }

  if(m_sourceVolumeHasBeenSet)
  {
   payload.WithString("sourceVolume", m_sourceVolume);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
