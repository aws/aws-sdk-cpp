/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkUpdateImportInfo.h>
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

SidewalkUpdateImportInfo::SidewalkUpdateImportInfo() : 
    m_deviceCreationFileHasBeenSet(false)
{
}

SidewalkUpdateImportInfo::SidewalkUpdateImportInfo(JsonView jsonValue) : 
    m_deviceCreationFileHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkUpdateImportInfo& SidewalkUpdateImportInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceCreationFile"))
  {
    m_deviceCreationFile = jsonValue.GetString("DeviceCreationFile");

    m_deviceCreationFileHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkUpdateImportInfo::Jsonize() const
{
  JsonValue payload;

  if(m_deviceCreationFileHasBeenSet)
  {
   payload.WithString("DeviceCreationFile", m_deviceCreationFile);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
