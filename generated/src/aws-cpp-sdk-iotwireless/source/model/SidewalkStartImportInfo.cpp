/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkStartImportInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkStartImportInfo::SidewalkStartImportInfo() : 
    m_deviceCreationFileHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

SidewalkStartImportInfo::SidewalkStartImportInfo(JsonView jsonValue) : 
    m_deviceCreationFileHasBeenSet(false),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkStartImportInfo& SidewalkStartImportInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceCreationFile"))
  {
    m_deviceCreationFile = jsonValue.GetString("DeviceCreationFile");

    m_deviceCreationFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkStartImportInfo::Jsonize() const
{
  JsonValue payload;

  if(m_deviceCreationFileHasBeenSet)
  {
   payload.WithString("DeviceCreationFile", m_deviceCreationFile);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
