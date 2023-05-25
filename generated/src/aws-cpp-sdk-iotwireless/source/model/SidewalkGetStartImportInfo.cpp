/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkGetStartImportInfo.h>
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

SidewalkGetStartImportInfo::SidewalkGetStartImportInfo() : 
    m_deviceCreationFileListHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

SidewalkGetStartImportInfo::SidewalkGetStartImportInfo(JsonView jsonValue) : 
    m_deviceCreationFileListHasBeenSet(false),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkGetStartImportInfo& SidewalkGetStartImportInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceCreationFileList"))
  {
    Aws::Utils::Array<JsonView> deviceCreationFileListJsonList = jsonValue.GetArray("DeviceCreationFileList");
    for(unsigned deviceCreationFileListIndex = 0; deviceCreationFileListIndex < deviceCreationFileListJsonList.GetLength(); ++deviceCreationFileListIndex)
    {
      m_deviceCreationFileList.push_back(deviceCreationFileListJsonList[deviceCreationFileListIndex].AsString());
    }
    m_deviceCreationFileListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkGetStartImportInfo::Jsonize() const
{
  JsonValue payload;

  if(m_deviceCreationFileListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceCreationFileListJsonList(m_deviceCreationFileList.size());
   for(unsigned deviceCreationFileListIndex = 0; deviceCreationFileListIndex < deviceCreationFileListJsonList.GetLength(); ++deviceCreationFileListIndex)
   {
     deviceCreationFileListJsonList[deviceCreationFileListIndex].AsString(m_deviceCreationFileList[deviceCreationFileListIndex]);
   }
   payload.WithArray("DeviceCreationFileList", std::move(deviceCreationFileListJsonList));

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
