/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
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

OnDeviceServiceConfiguration::OnDeviceServiceConfiguration() : 
    m_nFSOnDeviceServiceHasBeenSet(false)
{
}

OnDeviceServiceConfiguration::OnDeviceServiceConfiguration(JsonView jsonValue) : 
    m_nFSOnDeviceServiceHasBeenSet(false)
{
  *this = jsonValue;
}

OnDeviceServiceConfiguration& OnDeviceServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NFSOnDeviceService"))
  {
    m_nFSOnDeviceService = jsonValue.GetObject("NFSOnDeviceService");

    m_nFSOnDeviceServiceHasBeenSet = true;
  }

  return *this;
}

JsonValue OnDeviceServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nFSOnDeviceServiceHasBeenSet)
  {
   payload.WithObject("NFSOnDeviceService", m_nFSOnDeviceService.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
