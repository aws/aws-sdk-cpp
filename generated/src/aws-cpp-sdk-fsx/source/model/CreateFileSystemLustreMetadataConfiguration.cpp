/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateFileSystemLustreMetadataConfiguration.h>
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

CreateFileSystemLustreMetadataConfiguration::CreateFileSystemLustreMetadataConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateFileSystemLustreMetadataConfiguration& CreateFileSystemLustreMetadataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");
    m_iopsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = MetadataConfigurationModeMapper::GetMetadataConfigurationModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateFileSystemLustreMetadataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", MetadataConfigurationModeMapper::GetNameForMetadataConfigurationMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
