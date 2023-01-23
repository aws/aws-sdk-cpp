/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DiskSnapshotInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DiskSnapshotInfo::DiskSnapshotInfo() : 
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false)
{
}

DiskSnapshotInfo::DiskSnapshotInfo(JsonView jsonValue) : 
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

DiskSnapshotInfo& DiskSnapshotInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskSnapshotInfo::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
