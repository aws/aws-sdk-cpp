/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/snowball/model/DeviceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

DeviceConfiguration::DeviceConfiguration() : 
    m_snowconeDeviceConfigurationHasBeenSet(false)
{
}

DeviceConfiguration::DeviceConfiguration(JsonView jsonValue) : 
    m_snowconeDeviceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceConfiguration& DeviceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnowconeDeviceConfiguration"))
  {
    m_snowconeDeviceConfiguration = jsonValue.GetObject("SnowconeDeviceConfiguration");

    m_snowconeDeviceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snowconeDeviceConfigurationHasBeenSet)
  {
   payload.WithObject("SnowconeDeviceConfiguration", m_snowconeDeviceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
