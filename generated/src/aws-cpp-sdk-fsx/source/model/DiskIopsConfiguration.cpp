/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DiskIopsConfiguration.h>
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

DiskIopsConfiguration::DiskIopsConfiguration() : 
    m_mode(DiskIopsConfigurationMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false)
{
}

DiskIopsConfiguration::DiskIopsConfiguration(JsonView jsonValue) : 
    m_mode(DiskIopsConfigurationMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false)
{
  *this = jsonValue;
}

DiskIopsConfiguration& DiskIopsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = DiskIopsConfigurationModeMapper::GetDiskIopsConfigurationModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInt64("Iops");

    m_iopsHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskIopsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", DiskIopsConfigurationModeMapper::GetNameForDiskIopsConfigurationMode(m_mode));
  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInt64("Iops", m_iops);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
