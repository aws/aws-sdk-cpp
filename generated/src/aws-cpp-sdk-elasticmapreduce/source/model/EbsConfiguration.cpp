/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/EbsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

EbsConfiguration::EbsConfiguration() : 
    m_ebsBlockDeviceConfigsHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false)
{
}

EbsConfiguration::EbsConfiguration(JsonView jsonValue) : 
    m_ebsBlockDeviceConfigsHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false)
{
  *this = jsonValue;
}

EbsConfiguration& EbsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EbsBlockDeviceConfigs"))
  {
    Aws::Utils::Array<JsonView> ebsBlockDeviceConfigsJsonList = jsonValue.GetArray("EbsBlockDeviceConfigs");
    for(unsigned ebsBlockDeviceConfigsIndex = 0; ebsBlockDeviceConfigsIndex < ebsBlockDeviceConfigsJsonList.GetLength(); ++ebsBlockDeviceConfigsIndex)
    {
      m_ebsBlockDeviceConfigs.push_back(ebsBlockDeviceConfigsJsonList[ebsBlockDeviceConfigsIndex].AsObject());
    }
    m_ebsBlockDeviceConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");

    m_ebsOptimizedHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ebsBlockDeviceConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ebsBlockDeviceConfigsJsonList(m_ebsBlockDeviceConfigs.size());
   for(unsigned ebsBlockDeviceConfigsIndex = 0; ebsBlockDeviceConfigsIndex < ebsBlockDeviceConfigsJsonList.GetLength(); ++ebsBlockDeviceConfigsIndex)
   {
     ebsBlockDeviceConfigsJsonList[ebsBlockDeviceConfigsIndex].AsObject(m_ebsBlockDeviceConfigs[ebsBlockDeviceConfigsIndex].Jsonize());
   }
   payload.WithArray("EbsBlockDeviceConfigs", std::move(ebsBlockDeviceConfigsJsonList));

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
