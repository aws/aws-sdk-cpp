/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LaunchTemplateDiskConf.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LaunchTemplateDiskConf::LaunchTemplateDiskConf() : 
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
}

LaunchTemplateDiskConf::LaunchTemplateDiskConf(JsonView jsonValue) : 
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchTemplateDiskConf& LaunchTemplateDiskConf::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInt64("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throughput"))
  {
    m_throughput = jsonValue.GetInt64("throughput");

    m_throughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("volumeType"));

    m_volumeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchTemplateDiskConf::Jsonize() const
{
  JsonValue payload;

  if(m_iopsHasBeenSet)
  {
   payload.WithInt64("iops", m_iops);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInt64("throughput", m_throughput);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", VolumeTypeMapper::GetNameForVolumeType(m_volumeType));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
