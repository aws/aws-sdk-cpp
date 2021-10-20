/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceJobConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

DeviceJobConfig::DeviceJobConfig() : 
    m_oTAJobConfigHasBeenSet(false)
{
}

DeviceJobConfig::DeviceJobConfig(JsonView jsonValue) : 
    m_oTAJobConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceJobConfig& DeviceJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OTAJobConfig"))
  {
    m_oTAJobConfig = jsonValue.GetObject("OTAJobConfig");

    m_oTAJobConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_oTAJobConfigHasBeenSet)
  {
   payload.WithObject("OTAJobConfig", m_oTAJobConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
