/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/CustomerArtifactPaths.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

CustomerArtifactPaths::CustomerArtifactPaths() : 
    m_iosPathsHasBeenSet(false),
    m_androidPathsHasBeenSet(false),
    m_deviceHostPathsHasBeenSet(false)
{
}

CustomerArtifactPaths::CustomerArtifactPaths(JsonView jsonValue) : 
    m_iosPathsHasBeenSet(false),
    m_androidPathsHasBeenSet(false),
    m_deviceHostPathsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerArtifactPaths& CustomerArtifactPaths::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iosPaths"))
  {
    Aws::Utils::Array<JsonView> iosPathsJsonList = jsonValue.GetArray("iosPaths");
    for(unsigned iosPathsIndex = 0; iosPathsIndex < iosPathsJsonList.GetLength(); ++iosPathsIndex)
    {
      m_iosPaths.push_back(iosPathsJsonList[iosPathsIndex].AsString());
    }
    m_iosPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("androidPaths"))
  {
    Aws::Utils::Array<JsonView> androidPathsJsonList = jsonValue.GetArray("androidPaths");
    for(unsigned androidPathsIndex = 0; androidPathsIndex < androidPathsJsonList.GetLength(); ++androidPathsIndex)
    {
      m_androidPaths.push_back(androidPathsJsonList[androidPathsIndex].AsString());
    }
    m_androidPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceHostPaths"))
  {
    Aws::Utils::Array<JsonView> deviceHostPathsJsonList = jsonValue.GetArray("deviceHostPaths");
    for(unsigned deviceHostPathsIndex = 0; deviceHostPathsIndex < deviceHostPathsJsonList.GetLength(); ++deviceHostPathsIndex)
    {
      m_deviceHostPaths.push_back(deviceHostPathsJsonList[deviceHostPathsIndex].AsString());
    }
    m_deviceHostPathsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerArtifactPaths::Jsonize() const
{
  JsonValue payload;

  if(m_iosPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> iosPathsJsonList(m_iosPaths.size());
   for(unsigned iosPathsIndex = 0; iosPathsIndex < iosPathsJsonList.GetLength(); ++iosPathsIndex)
   {
     iosPathsJsonList[iosPathsIndex].AsString(m_iosPaths[iosPathsIndex]);
   }
   payload.WithArray("iosPaths", std::move(iosPathsJsonList));

  }

  if(m_androidPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> androidPathsJsonList(m_androidPaths.size());
   for(unsigned androidPathsIndex = 0; androidPathsIndex < androidPathsJsonList.GetLength(); ++androidPathsIndex)
   {
     androidPathsJsonList[androidPathsIndex].AsString(m_androidPaths[androidPathsIndex]);
   }
   payload.WithArray("androidPaths", std::move(androidPathsJsonList));

  }

  if(m_deviceHostPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceHostPathsJsonList(m_deviceHostPaths.size());
   for(unsigned deviceHostPathsIndex = 0; deviceHostPathsIndex < deviceHostPathsJsonList.GetLength(); ++deviceHostPathsIndex)
   {
     deviceHostPathsJsonList[deviceHostPathsIndex].AsString(m_deviceHostPaths[deviceHostPathsIndex]);
   }
   payload.WithArray("deviceHostPaths", std::move(deviceHostPathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
